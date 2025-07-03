const
   X3D     = require ("x_ite-node"),
   canvas  = X3D .createBrowser (),
   browser = canvas .browser,
   scene   = browser .currentScene;
async function main () {
scene.setProfile(browser.getProfile("Immersive"));
scene.addMetaData("title", "arc3.x3d");
scene.addMetaData("creator", "Lost, Doug Sanden I think");
scene.addMetaData("generator", "manual");
scene.addMetaData("identifier", "https://coderextreme.net/X3DJSONLD/src/main/data/x3dconnectorProto.x3d");
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
Transform10.DEF = "DECLpoint_G1_node";
let Shape11 = browser.currentScene.createNode("Shape");
let Sphere12 = browser.currentScene.createNode("Sphere");
Sphere12.radius = 0.1;
geometry = Sphere12;

let Appearance13 = browser.currentScene.createNode("Appearance");
let Material14 = browser.currentScene.createNode("Material");
Material14.diffuseColor = new X3D.SFColor([1,0,0]);
material = Material14;

appearance = Appearance13;

Transform10YYY.child = new X3D.undefined();

Transform10ZZZ.child[0] = Shape11;

let PositionInterpolator15 = browser.currentScene.createNode("PositionInterpolator");
PositionInterpolator15.DEF = "DECLpoint_G1_PI1";
PositionInterpolator15.key = new X3D.MFFloat([0,1]);
PositionInterpolator15.keyValue = new X3D.MFVec3f([0,0,0,0,5,0]);
Transform10ZZZ.children[1] = PositionInterpolator15;

let Script16 = browser.currentScene.createNode("Script");
Script16.DEF = "DECLpoint_G1_MB1";
Script17.getField("translation").setValue("0 0 0");
Script16YYY.field = new X3D.MFNode();

Script18.getField("old").setValue("0 0 0");
Script16YYY.field = new X3D.MFNode();

Script19.getField("set_location")Script16YYY.field = new X3D.MFNode();

Script20.getField("keyValue").setValue("0 0 0 0 5 0");
Script16YYY.field = new X3D.MFNode();


Script16.setSourceCode(`ecmascript:\n"+
"		function set_location(value) {\n"+
"                    old = translation;\n"+
"		    translation = new SFVec3f(Math.random()*10-5, Math.random()*10-5, Math.random()*10-5);\n"+
"                    keyValue = new MFVec3f([old, translation]);\n"+
"		    // Browser.println(keyValue);\n"+
"		}`)
Transform10ZZZ.children[2] = Script16;

let TimeSensor21 = browser.currentScene.createNode("TimeSensor");
TimeSensor21.DEF = "DECLpoint_G1_CL1";
TimeSensor21.cycleInterval = 3;
TimeSensor21.loop = True;
Transform10ZZZ.children[3] = TimeSensor21;

let ROUTE22 = browser.currentScene.createNode("ROUTE");
ROUTE22.fromNode = "DECLpoint_G1_CL1";
ROUTE22.fromField = "cycleTime";
ROUTE22.toNode = "DECLpoint_G1_MB1";
ROUTE22.toField = "set_location";
Transform10ZZZ.children[4] = ROUTE22;

let ROUTE23 = browser.currentScene.createNode("ROUTE");
ROUTE23.fromNode = "DECLpoint_G1_CL1";
ROUTE23.fromField = "fraction_changed";
ROUTE23.toNode = "DECLpoint_G1_PI1";
ROUTE23.toField = "set_fraction";
Transform10ZZZ.children[5] = ROUTE23;

let ROUTE24 = browser.currentScene.createNode("ROUTE");
ROUTE24.fromNode = "DECLpoint_G1_MB1";
ROUTE24.fromField = "keyValue";
ROUTE24.toNode = "DECLpoint_G1_PI1";
ROUTE24.toField = "keyValue";
Transform10ZZZ.children[6] = ROUTE24;

let ROUTE25 = browser.currentScene.createNode("ROUTE");
ROUTE25.fromNode = "DECLpoint_G1_PI1";
ROUTE25.fromField = "value_changed";
ROUTE25.toNode = "DECLpoint_G1_node";
ROUTE25.toField = "set_translation";
Transform10ZZZ.children[7] = ROUTE25;

browser.currentScene.children[2] = Transform10;

let Transform26 = browser.currentScene.createNode("Transform");
Transform26.DEF = "DECLpoint_G2_node";
let Shape27 = browser.currentScene.createNode("Shape");
let Sphere28 = browser.currentScene.createNode("Sphere");
Sphere28.radius = 0.1;
geometry = Sphere28;

let Appearance29 = browser.currentScene.createNode("Appearance");
let Material30 = browser.currentScene.createNode("Material");
Material30.diffuseColor = new X3D.SFColor([1,0,0]);
material = Material30;

appearance = Appearance29;

Transform26YYY.child = new X3D.undefined();

Transform26ZZZ.child[0] = Shape27;

let PositionInterpolator31 = browser.currentScene.createNode("PositionInterpolator");
PositionInterpolator31.DEF = "DECLpoint_G2_PI1";
PositionInterpolator31.key = new X3D.MFFloat([0,1]);
PositionInterpolator31.keyValue = new X3D.MFVec3f([0,0,0,0,5,0]);
Transform26ZZZ.children[1] = PositionInterpolator31;

let Script32 = browser.currentScene.createNode("Script");
Script32.DEF = "DECLpoint_G2_MB1";
Script33.getField("translation").setValue("0 0 0");
Script32YYY.field = new X3D.MFNode();

Script34.getField("old").setValue("0 0 0");
Script32YYY.field = new X3D.MFNode();

Script35.getField("set_location")Script32YYY.field = new X3D.MFNode();

Script36.getField("keyValue").setValue("0 0 0 0 5 0");
Script32YYY.field = new X3D.MFNode();


Script32.setSourceCode(`ecmascript:\n"+
"		function set_location(value) {\n"+
"                    old = translation;\n"+
"		    translation = new SFVec3f(Math.random()*10-5, Math.random()*10-5, Math.random()*10-5);\n"+
"                    keyValue = new MFVec3f([old, translation]);\n"+
"		    // Browser.println(keyValue);\n"+
"		}`)
Transform26ZZZ.children[2] = Script32;

let TimeSensor37 = browser.currentScene.createNode("TimeSensor");
TimeSensor37.DEF = "DECLpoint_G2_CL1";
TimeSensor37.cycleInterval = 3;
TimeSensor37.loop = True;
Transform26ZZZ.children[3] = TimeSensor37;

let ROUTE38 = browser.currentScene.createNode("ROUTE");
ROUTE38.fromNode = "DECLpoint_G2_CL1";
ROUTE38.fromField = "cycleTime";
ROUTE38.toNode = "DECLpoint_G2_MB1";
ROUTE38.toField = "set_location";
Transform26ZZZ.children[4] = ROUTE38;

let ROUTE39 = browser.currentScene.createNode("ROUTE");
ROUTE39.fromNode = "DECLpoint_G2_CL1";
ROUTE39.fromField = "fraction_changed";
ROUTE39.toNode = "DECLpoint_G2_PI1";
ROUTE39.toField = "set_fraction";
Transform26ZZZ.children[5] = ROUTE39;

let ROUTE40 = browser.currentScene.createNode("ROUTE");
ROUTE40.fromNode = "DECLpoint_G2_MB1";
ROUTE40.fromField = "keyValue";
ROUTE40.toNode = "DECLpoint_G2_PI1";
ROUTE40.toField = "keyValue";
Transform26ZZZ.children[6] = ROUTE40;

let ROUTE41 = browser.currentScene.createNode("ROUTE");
ROUTE41.fromNode = "DECLpoint_G2_PI1";
ROUTE41.fromField = "value_changed";
ROUTE41.toNode = "DECLpoint_G2_node";
ROUTE41.toField = "set_translation";
Transform26ZZZ.children[7] = ROUTE41;

browser.currentScene.children[3] = Transform26;

let Group42 = browser.currentScene.createNode("Group");
let Transform43 = browser.currentScene.createNode("Transform");
Transform43.DEF = "DECLx3dconnector_connector1_trans";
let Transform44 = browser.currentScene.createNode("Transform");
Transform44.DEF = "DECLx3dconnector_connector1_rotscale";
let Shape45 = browser.currentScene.createNode("Shape");
let Appearance46 = browser.currentScene.createNode("Appearance");
let Material47 = browser.currentScene.createNode("Material");
Material47.diffuseColor = new X3D.SFColor([0.2,0.7,0.7]);
Material47.transparency = 0.5;
material = Material47;

appearance = Appearance46;

let Cylinder48 = browser.currentScene.createNode("Cylinder");
Cylinder48.radius = 0.05;
geometry = Cylinder48;

Transform44YYY.child = new X3D.undefined();

Transform44ZZZ.child[0] = Shape45;

Transform43YYY.children = new X3D.MFNode();

Transform43ZZZ.children[0] = Transform44;

Group42YYY.children = new X3D.MFNode();

Group42ZZZ.children[0] = Transform43;

let Script49 = browser.currentScene.createNode("Script");
Script49.DEF = "DECLx3dconnector_connector1_S1";
Script50.getField("startnode")let Group51 = browser.currentScene.createNode("Group");
Group51.USE = "DECLpoint_G1_node";
field50YYY.children = new X3D.MFNode();

field50ZZZ.children[0] = Group51;

Script49YYY.field = new X3D.MFNode();

Script52.getField("endnode")let Group53 = browser.currentScene.createNode("Group");
Group53.USE = "DECLpoint_G2_node";
field52YYY.children = new X3D.MFNode();

field52ZZZ.children[0] = Group53;

Script49YYY.field = new X3D.MFNode();

Script54.getField("position")let Transform55 = browser.currentScene.createNode("Transform");
Transform55.USE = "DECLx3dconnector_connector1_trans";
field54YYY.children = new X3D.MFNode();

field54ZZZ.children[0] = Transform55;

Script49YYY.field = new X3D.MFNode();

Script56.getField("rotscale")let Transform57 = browser.currentScene.createNode("Transform");
Transform57.USE = "DECLx3dconnector_connector1_rotscale";
field56YYY.children = new X3D.MFNode();

field56ZZZ.children[0] = Transform57;

Script49YYY.field = new X3D.MFNode();

Script58.getField("set_startpoint")Script49YYY.field = new X3D.MFNode();

Script59.getField("set_endpoint")Script49YYY.field = new X3D.MFNode();


Script49.setSourceCode(`ecmascript:\n"+
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
"	    } else if (typeof SFRotation !== 'undefined') {\n"+
"		    return {\n"+
"			    scale : new SFVec3f(1.0,dist,1.0),\n"+
"			    translation : transl,\n"+
"			    rotation : new SFRotation(new SFVec3f(0.0,1.0,0.0),norm)\n"+
"		    };\n"+
"	    } else {\n"+
"		    return {\n"+
"			    scale : new SFVec3f(1.0,dist,1.0),\n"+
"			    translation : transl\n"+
"		    };\n"+
"	    }\n"+
"	}\n"+
"	function recompute_and_route(startpoint, endpoint) {\n"+
"	      var trafo = recompute(startpoint, endpoint);\n"+
"	      if (trafo) {\n"+
"		      position.translation = trafo.translation;\n"+
"		      rotscale.rotation = trafo.rotation;\n"+
"		      rotscale.scale = trafo.scale;\n"+
"	      }\n"+
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
Group42ZZZ.children[1] = Script49;

browser.currentScene.children[4] = Group42;

let ROUTE60 = browser.currentScene.createNode("ROUTE");
ROUTE60.fromNode = "DECLpoint_G1_node";
ROUTE60.fromField = "translation";
ROUTE60.toNode = "DECLx3dconnector_connector1_S1";
ROUTE60.toField = "set_startpoint";
browser.currentScene.children[5] = ROUTE60;

let ROUTE61 = browser.currentScene.createNode("ROUTE");
ROUTE61.fromNode = "DECLpoint_G2_node";
ROUTE61.fromField = "translation";
ROUTE61.toNode = "DECLx3dconnector_connector1_S1";
ROUTE61.toField = "set_endpoint";
browser.currentScene.children[6] = ROUTE61;

}
main ();
