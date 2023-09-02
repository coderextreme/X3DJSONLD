let browser = X3D.getBrowser();
let X3D0 = {};
X3D0.profile = "Immersive";
X3D0.version = "3.3";
let head1 = browser.currentScene.createNode("head");
let meta2 = browser.currentScene.createNode("meta");
meta2.name = "title";
meta2.content = "arc2.x3d";
head1.meta = new MFNode();

head1.meta[0] = meta2;

let meta3 = browser.currentScene.createNode("meta");
meta3.name = "creator";
meta3.content = "Lost, Doug Sanden I think";
head1.meta[1] = meta3;

let meta4 = browser.currentScene.createNode("meta");
meta4.name = "generator";
meta4.content = "manual";
head1.meta[2] = meta4;

let meta5 = browser.currentScene.createNode("meta");
meta5.name = "identifier";
meta5.content = "https://coderextreme.net/X3DJSONLD/src/main/data/arc1.x3d";
head1.meta[3] = meta5;

let meta6 = browser.currentScene.createNode("meta");
meta6.name = "description";
meta6.content = "a generic proto to connect two objects";
head1.meta[4] = meta6;

head = head1;

let Viewpoint8 = browser.currentScene.createNode("Viewpoint");
Viewpoint8.position = new SFVec3f(new float[0,0,5]);
Viewpoint8.description = "Only Viewpoint";
browser.currentScene.children = new MFNode();

browser.currentScene.children[0] = Viewpoint8;

let Background9 = browser.currentScene.createNode("Background");
Background9.skyColor = new MFColor(new float[0.4,0.4,0.4]);
browser.currentScene.children[1] = Background9;

let Transform10 = browser.currentScene.createNode("Transform");
Transform10.DEF = "G1";
let Transform11 = browser.currentScene.createNode("Transform");
Transform11.DEF = "DECLpoint_INSTANCE_node";
let Shape12 = browser.currentScene.createNode("Shape");
let Sphere13 = browser.currentScene.createNode("Sphere");
Sphere13.radius = 0.1;
Shape12.geometry = Sphere13;

let Appearance14 = browser.currentScene.createNode("Appearance");
let Material15 = browser.currentScene.createNode("Material");
Material15.diffuseColor = new SFColor(new float[1,0,0]);
Appearance14.material = Material15;

Shape12.appearance = Appearance14;

Transform11.child = new undefined();

Transform11.child[0] = Shape12;

let PositionInterpolator16 = browser.currentScene.createNode("PositionInterpolator");
PositionInterpolator16.DEF = "DECLpoint_INSTANCE_PI1";
PositionInterpolator16.key = new MFFloat(new float[0,1]);
PositionInterpolator16.keyValue = new MFVec3f(new float[0,0,0,0,5,0]);
Transform11.children[1] = PositionInterpolator16;

let Script17 = browser.currentScene.createNode("Script");
Script17.DEF = "DECLpoint_INSTANCE_MB1";
let field18 = browser.currentScene.createNode("field");
field18.name = "translation";
field18.accessType = "inputOutput";
field18.type = "SFVec3f";
field18.value = "0 0 0";
Script17.field = new MFNode();

Script17.field[0] = field18;

let field19 = browser.currentScene.createNode("field");
field19.name = "old";
field19.accessType = "inputOutput";
field19.type = "SFVec3f";
field19.value = "0 0 0";
Script17.field[1] = field19;

let field20 = browser.currentScene.createNode("field");
field20.name = "set_location";
field20.accessType = "inputOnly";
field20.type = "SFTime";
Script17.field[2] = field20;

let field21 = browser.currentScene.createNode("field");
field21.name = "keyValue";
field21.accessType = "inputOutput";
field21.type = "MFVec3f";
field21.value = "0 0 0 0 5 0";
Script17.field[3] = field21;


Script17.setSourceCode(`ecmascript:\n"+
"               function set_location(value) {\n"+
"                    old = translation;\n"+
"                    translation = new SFVec3f(Math.random()*10-5, Math.random()*10-5, Math.random()*10-5);\n"+
"                    keyValue = new MFVec3f(old, translation);\n"+
"               }`)
Transform11.children[2] = Script17;

let TimeSensor22 = browser.currentScene.createNode("TimeSensor");
TimeSensor22.DEF = "DECLpoint_INSTANCE_CL1";
TimeSensor22.cycleInterval = 3;
TimeSensor22.loop = True;
Transform11.children[3] = TimeSensor22;

let ROUTE23 = browser.currentScene.createNode("ROUTE");
ROUTE23.fromNode = "DECLpoint_INSTANCE_CL1";
ROUTE23.fromField = "cycleTime";
ROUTE23.toNode = "DECLpoint_INSTANCE_MB1";
ROUTE23.toField = "set_location";
Transform11.children[4] = ROUTE23;

let ROUTE24 = browser.currentScene.createNode("ROUTE");
ROUTE24.fromNode = "DECLpoint_INSTANCE_CL1";
ROUTE24.fromField = "fraction_changed";
ROUTE24.toNode = "DECLpoint_INSTANCE_PI1";
ROUTE24.toField = "set_fraction";
Transform11.children[5] = ROUTE24;

let ROUTE25 = browser.currentScene.createNode("ROUTE");
ROUTE25.fromNode = "DECLpoint_INSTANCE_MB1";
ROUTE25.fromField = "keyValue";
ROUTE25.toNode = "DECLpoint_INSTANCE_PI1";
ROUTE25.toField = "keyValue";
Transform11.children[6] = ROUTE25;

let ROUTE26 = browser.currentScene.createNode("ROUTE");
ROUTE26.fromNode = "DECLpoint_INSTANCE_PI1";
ROUTE26.fromField = "value_changed";
ROUTE26.toNode = "DECLpoint_INSTANCE_node";
ROUTE26.toField = "set_translation";
Transform11.children[7] = ROUTE26;

let ROUTE27 = browser.currentScene.createNode("ROUTE");
ROUTE27.fromNode = "DECLpoint_INSTANCE_MB1";
ROUTE27.fromField = "translation_changed";
ROUTE27.toNode = "DECLpoint_INSTANCE_node";
ROUTE27.toField = "set_translation";
Transform11.children[8] = ROUTE27;

Transform10.children = new MFNode();

Transform10.children[0] = Transform11;

browser.currentScene.children[2] = Transform10;

let Transform28 = browser.currentScene.createNode("Transform");
Transform28.DEF = "G2";
let Transform29 = browser.currentScene.createNode("Transform");
Transform29.DEF = "DECLpoint_INSTANCE1000_node";
let Shape30 = browser.currentScene.createNode("Shape");
let Sphere31 = browser.currentScene.createNode("Sphere");
Sphere31.radius = 0.1;
Shape30.geometry = Sphere31;

let Appearance32 = browser.currentScene.createNode("Appearance");
let Material33 = browser.currentScene.createNode("Material");
Material33.diffuseColor = new SFColor(new float[1,0,0]);
Appearance32.material = Material33;

Shape30.appearance = Appearance32;

Transform29.child = new undefined();

Transform29.child[0] = Shape30;

let PositionInterpolator34 = browser.currentScene.createNode("PositionInterpolator");
PositionInterpolator34.DEF = "DECLpoint_INSTANCE1000_PI1";
PositionInterpolator34.key = new MFFloat(new float[0,1]);
PositionInterpolator34.keyValue = new MFVec3f(new float[0,0,0,0,5,0]);
Transform29.children[1] = PositionInterpolator34;

let Script35 = browser.currentScene.createNode("Script");
Script35.DEF = "DECLpoint_INSTANCE1000_MB1";
let field36 = browser.currentScene.createNode("field");
field36.name = "translation";
field36.accessType = "inputOutput";
field36.type = "SFVec3f";
field36.value = "0 0 0";
Script35.field = new MFNode();

Script35.field[0] = field36;

let field37 = browser.currentScene.createNode("field");
field37.name = "old";
field37.accessType = "inputOutput";
field37.type = "SFVec3f";
field37.value = "0 0 0";
Script35.field[1] = field37;

let field38 = browser.currentScene.createNode("field");
field38.name = "set_location";
field38.accessType = "inputOnly";
field38.type = "SFTime";
Script35.field[2] = field38;

let field39 = browser.currentScene.createNode("field");
field39.name = "keyValue";
field39.accessType = "inputOutput";
field39.type = "MFVec3f";
field39.value = "0 0 0 0 5 0";
Script35.field[3] = field39;


Script35.setSourceCode(`ecmascript:\n"+
"               function set_location(value) {\n"+
"                    old = translation;\n"+
"                    translation = new SFVec3f(Math.random()*10-5, Math.random()*10-5, Math.random()*10-5);\n"+
"                    keyValue = new MFVec3f(old, translation);\n"+
"               }`)
Transform29.children[2] = Script35;

let TimeSensor40 = browser.currentScene.createNode("TimeSensor");
TimeSensor40.DEF = "DECLpoint_INSTANCE1000_CL1";
TimeSensor40.cycleInterval = 3;
TimeSensor40.loop = True;
Transform29.children[3] = TimeSensor40;

let ROUTE41 = browser.currentScene.createNode("ROUTE");
ROUTE41.fromNode = "DECLpoint_INSTANCE1000_CL1";
ROUTE41.fromField = "cycleTime";
ROUTE41.toNode = "DECLpoint_INSTANCE1000_MB1";
ROUTE41.toField = "set_location";
Transform29.children[4] = ROUTE41;

let ROUTE42 = browser.currentScene.createNode("ROUTE");
ROUTE42.fromNode = "DECLpoint_INSTANCE1000_CL1";
ROUTE42.fromField = "fraction_changed";
ROUTE42.toNode = "DECLpoint_INSTANCE1000_PI1";
ROUTE42.toField = "set_fraction";
Transform29.children[5] = ROUTE42;

let ROUTE43 = browser.currentScene.createNode("ROUTE");
ROUTE43.fromNode = "DECLpoint_INSTANCE1000_MB1";
ROUTE43.fromField = "keyValue";
ROUTE43.toNode = "DECLpoint_INSTANCE1000_PI1";
ROUTE43.toField = "keyValue";
Transform29.children[6] = ROUTE43;

let ROUTE44 = browser.currentScene.createNode("ROUTE");
ROUTE44.fromNode = "DECLpoint_INSTANCE1000_PI1";
ROUTE44.fromField = "value_changed";
ROUTE44.toNode = "DECLpoint_INSTANCE1000_node";
ROUTE44.toField = "set_translation";
Transform29.children[7] = ROUTE44;

let ROUTE45 = browser.currentScene.createNode("ROUTE");
ROUTE45.fromNode = "DECLpoint_INSTANCE1000_MB1";
ROUTE45.fromField = "translation_changed";
ROUTE45.toNode = "DECLpoint_INSTANCE1000_node";
ROUTE45.toField = "set_translation";
Transform29.children[8] = ROUTE45;

Transform28.children = new MFNode();

Transform28.children[0] = Transform29;

browser.currentScene.children[3] = Transform28;

let Transform46 = browser.currentScene.createNode("Transform");
Transform46.DEF = "transC1";
let Transform47 = browser.currentScene.createNode("Transform");
Transform47.DEF = "rotscaleC1";
let Shape48 = browser.currentScene.createNode("Shape");
let Appearance49 = browser.currentScene.createNode("Appearance");
let Material50 = browser.currentScene.createNode("Material");
Material50.diffuseColor = new SFColor(new float[0.2,0.7,0.7]);
Material50.transparency = 0.5;
Appearance49.material = Material50;

Shape48.appearance = Appearance49;

let Cylinder51 = browser.currentScene.createNode("Cylinder");
Cylinder51.radius = 0.05;
Shape48.geometry = Cylinder51;

Transform47.child = new undefined();

Transform47.child[0] = Shape48;

Transform46.children = new MFNode();

Transform46.children[0] = Transform47;

browser.currentScene.children[4] = Transform46;

let Script52 = browser.currentScene.createNode("Script");
Script52.DEF = "DECLx3dconnector_connector1_S1";
let field53 = browser.currentScene.createNode("field");
field53.name = "startnode";
field53.accessType = "initializeOnly";
field53.type = "SFNode";
let Transform54 = browser.currentScene.createNode("Transform");
Transform54.USE = "G1";
field53.children = new MFNode();

field53.children[0] = Transform54;

Script52.field = new MFNode();

Script52.field[0] = field53;

let field55 = browser.currentScene.createNode("field");
field55.name = "endnode";
field55.accessType = "initializeOnly";
field55.type = "SFNode";
let Transform56 = browser.currentScene.createNode("Transform");
Transform56.USE = "G2";
field55.children = new MFNode();

field55.children[0] = Transform56;

Script52.field[1] = field55;

let field57 = browser.currentScene.createNode("field");
field57.name = "transC1";
field57.accessType = "initializeOnly";
field57.type = "SFNode";
let Transform58 = browser.currentScene.createNode("Transform");
Transform58.USE = "transC1";
field57.children = new MFNode();

field57.children[0] = Transform58;

Script52.field[2] = field57;

let field59 = browser.currentScene.createNode("field");
field59.name = "rotscaleC1";
field59.accessType = "initializeOnly";
field59.type = "SFNode";
let Transform60 = browser.currentScene.createNode("Transform");
Transform60.USE = "rotscaleC1";
field59.children = new MFNode();

field59.children[0] = Transform60;

Script52.field[3] = field59;

let field61 = browser.currentScene.createNode("field");
field61.name = "set_startpoint";
field61.accessType = "inputOnly";
field61.type = "SFVec3f";
Script52.field[4] = field61;

let field62 = browser.currentScene.createNode("field");
field62.name = "set_endpoint";
field62.accessType = "inputOnly";
field62.type = "SFVec3f";
Script52.field[5] = field62;


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

