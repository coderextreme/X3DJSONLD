let browser = X3D.getBrowser();
let X3D0 = {};
X3D0.profile = "Immersive";
X3D0.version = "3.3";
let Viewpoint2 = browser.currentScene.createNode("Viewpoint");
Viewpoint2.position = new SFVec3f(new float[0,0,5]);
Viewpoint2.description = "Only Viewpoint";
browser.currentScene.children = new MFNode();

browser.currentScene.children[0] = Viewpoint2;

let Background3 = browser.currentScene.createNode("Background");
Background3.skyColor = new MFColor(new float[0.4,0.4,0.4]);
browser.currentScene.children[1] = Background3;

let Transform4 = browser.currentScene.createNode("Transform");
Transform4.DEF = "DECLpoint_G1_node";
let Shape5 = browser.currentScene.createNode("Shape");
let Sphere6 = browser.currentScene.createNode("Sphere");
Sphere6.radius = 0.1;
Shape5.geometry = Sphere6;

let Appearance7 = browser.currentScene.createNode("Appearance");
let Material8 = browser.currentScene.createNode("Material");
Material8.diffuseColor = new SFColor(new float[1,0,0]);
Appearance7.material = Material8;

Shape5.appearance = Appearance7;

Transform4.children = new MFNode();

Transform4.children[0] = Shape5;

let PositionInterpolator9 = browser.currentScene.createNode("PositionInterpolator");
PositionInterpolator9.DEF = "DECLpoint_G1_PI1";
PositionInterpolator9.key = new MFFloat(new float[0,1]);
PositionInterpolator9.keyValue = new MFVec3f(new float[0,0,0,0,5,0]);
Transform4.children[1] = PositionInterpolator9;

let Script10 = browser.currentScene.createNode("Script");
Script10.DEF = "DECLpoint_G1_MB1";
let field11 = browser.currentScene.createNode("field");
field11.name = "translation";
field11.accessType = "inputOutput";
field11.type = "SFVec3f";
field11.value = "0 0 0";
Script10.field = new MFNode();

Script10.field[0] = field11;

let field12 = browser.currentScene.createNode("field");
field12.name = "old";
field12.accessType = "inputOutput";
field12.type = "SFVec3f";
field12.value = "0 0 0";
Script10.field[1] = field12;

let field13 = browser.currentScene.createNode("field");
field13.name = "set_location";
field13.accessType = "inputOnly";
field13.type = "SFTime";
Script10.field[2] = field13;

let field14 = browser.currentScene.createNode("field");
field14.name = "keyValue";
field14.accessType = "inputOutput";
field14.type = "MFVec3f";
field14.value = "0 0 0 0 5 0";
Script10.field[3] = field14;


Script10.setSourceCode(`ecmascript:\n"+
"		function set_location(value) {\n"+
"                    old = translation;\n"+
"		    translation = new SFVec3f(Math.random()*10-5, Math.random()*10-5, Math.random()*10-5);\n"+
"                    keyValue = new MFVec3f([old, translation]);\n"+
"		    // Browser.println(keyValue);\n"+
"		}`)
Transform4.children[2] = Script10;

let TimeSensor15 = browser.currentScene.createNode("TimeSensor");
TimeSensor15.DEF = "DECLpoint_G1_CL1";
TimeSensor15.cycleInterval = 3;
TimeSensor15.loop = True;
Transform4.children[3] = TimeSensor15;

let ROUTE16 = browser.currentScene.createNode("ROUTE");
ROUTE16.fromNode = "DECLpoint_G1_CL1";
ROUTE16.fromField = "cycleTime";
ROUTE16.toNode = "DECLpoint_G1_MB1";
ROUTE16.toField = "set_location";
Transform4.children[4] = ROUTE16;

let ROUTE17 = browser.currentScene.createNode("ROUTE");
ROUTE17.fromNode = "DECLpoint_G1_CL1";
ROUTE17.fromField = "fraction_changed";
ROUTE17.toNode = "DECLpoint_G1_PI1";
ROUTE17.toField = "set_fraction";
Transform4.children[5] = ROUTE17;

let ROUTE18 = browser.currentScene.createNode("ROUTE");
ROUTE18.fromNode = "DECLpoint_G1_MB1";
ROUTE18.fromField = "keyValue";
ROUTE18.toNode = "DECLpoint_G1_PI1";
ROUTE18.toField = "keyValue";
Transform4.children[6] = ROUTE18;

let ROUTE19 = browser.currentScene.createNode("ROUTE");
ROUTE19.fromNode = "DECLpoint_G1_PI1";
ROUTE19.fromField = "value_changed";
ROUTE19.toNode = "DECLpoint_G1_node";
ROUTE19.toField = "set_translation";
Transform4.children[7] = ROUTE19;

browser.currentScene.children[2] = Transform4;

let Transform20 = browser.currentScene.createNode("Transform");
Transform20.DEF = "DECLpoint_G2_node";
let Shape21 = browser.currentScene.createNode("Shape");
let Sphere22 = browser.currentScene.createNode("Sphere");
Sphere22.radius = 0.1;
Shape21.geometry = Sphere22;

let Appearance23 = browser.currentScene.createNode("Appearance");
let Material24 = browser.currentScene.createNode("Material");
Material24.diffuseColor = new SFColor(new float[1,0,0]);
Appearance23.material = Material24;

Shape21.appearance = Appearance23;

Transform20.children = new MFNode();

Transform20.children[0] = Shape21;

let PositionInterpolator25 = browser.currentScene.createNode("PositionInterpolator");
PositionInterpolator25.DEF = "DECLpoint_G2_PI1";
PositionInterpolator25.key = new MFFloat(new float[0,1]);
PositionInterpolator25.keyValue = new MFVec3f(new float[0,0,0,0,5,0]);
Transform20.children[1] = PositionInterpolator25;

let Script26 = browser.currentScene.createNode("Script");
Script26.DEF = "DECLpoint_G2_MB1";
let field27 = browser.currentScene.createNode("field");
field27.name = "translation";
field27.accessType = "inputOutput";
field27.type = "SFVec3f";
field27.value = "0 0 0";
Script26.field = new MFNode();

Script26.field[0] = field27;

let field28 = browser.currentScene.createNode("field");
field28.name = "old";
field28.accessType = "inputOutput";
field28.type = "SFVec3f";
field28.value = "0 0 0";
Script26.field[1] = field28;

let field29 = browser.currentScene.createNode("field");
field29.name = "set_location";
field29.accessType = "inputOnly";
field29.type = "SFTime";
Script26.field[2] = field29;

let field30 = browser.currentScene.createNode("field");
field30.name = "keyValue";
field30.accessType = "inputOutput";
field30.type = "MFVec3f";
field30.value = "0 0 0 0 5 0";
Script26.field[3] = field30;


Script26.setSourceCode(`ecmascript:\n"+
"		function set_location(value) {\n"+
"                    old = translation;\n"+
"		    translation = new SFVec3f(Math.random()*10-5, Math.random()*10-5, Math.random()*10-5);\n"+
"                    keyValue = new MFVec3f([old, translation]);\n"+
"		    // Browser.println(keyValue);\n"+
"		}`)
Transform20.children[2] = Script26;

let TimeSensor31 = browser.currentScene.createNode("TimeSensor");
TimeSensor31.DEF = "DECLpoint_G2_CL1";
TimeSensor31.cycleInterval = 3;
TimeSensor31.loop = True;
Transform20.children[3] = TimeSensor31;

let ROUTE32 = browser.currentScene.createNode("ROUTE");
ROUTE32.fromNode = "DECLpoint_G2_CL1";
ROUTE32.fromField = "cycleTime";
ROUTE32.toNode = "DECLpoint_G2_MB1";
ROUTE32.toField = "set_location";
Transform20.children[4] = ROUTE32;

let ROUTE33 = browser.currentScene.createNode("ROUTE");
ROUTE33.fromNode = "DECLpoint_G2_CL1";
ROUTE33.fromField = "fraction_changed";
ROUTE33.toNode = "DECLpoint_G2_PI1";
ROUTE33.toField = "set_fraction";
Transform20.children[5] = ROUTE33;

let ROUTE34 = browser.currentScene.createNode("ROUTE");
ROUTE34.fromNode = "DECLpoint_G2_MB1";
ROUTE34.fromField = "keyValue";
ROUTE34.toNode = "DECLpoint_G2_PI1";
ROUTE34.toField = "keyValue";
Transform20.children[6] = ROUTE34;

let ROUTE35 = browser.currentScene.createNode("ROUTE");
ROUTE35.fromNode = "DECLpoint_G2_PI1";
ROUTE35.fromField = "value_changed";
ROUTE35.toNode = "DECLpoint_G2_node";
ROUTE35.toField = "set_translation";
Transform20.children[7] = ROUTE35;

browser.currentScene.children[3] = Transform20;

let Group36 = browser.currentScene.createNode("Group");
let Transform37 = browser.currentScene.createNode("Transform");
Transform37.DEF = "DECLx3dconnector_connector1_trans";
let Transform38 = browser.currentScene.createNode("Transform");
Transform38.DEF = "DECLx3dconnector_connector1_rotscale";
let Shape39 = browser.currentScene.createNode("Shape");
let Appearance40 = browser.currentScene.createNode("Appearance");
let Material41 = browser.currentScene.createNode("Material");
Material41.diffuseColor = new SFColor(new float[0.2,0.7,0.7]);
Material41.transparency = 0.5;
Appearance40.material = Material41;

Shape39.appearance = Appearance40;

let Cylinder42 = browser.currentScene.createNode("Cylinder");
Cylinder42.radius = 0.05;
Shape39.geometry = Cylinder42;

Transform38.children = new MFNode();

Transform38.children[0] = Shape39;

Transform37.children = new MFNode();

Transform37.children[0] = Transform38;

Group36.children = new MFNode();

Group36.children[0] = Transform37;

let Script43 = browser.currentScene.createNode("Script");
Script43.DEF = "DECLx3dconnector_connector1_S1";
let field44 = browser.currentScene.createNode("field");
field44.name = "startnode";
field44.accessType = "initializeOnly";
field44.type = "SFNode";
let Group45 = browser.currentScene.createNode("Group");
Group45.USE = "DECLpoint_G1_node";
field44.children = new MFNode();

field44.children[0] = Group45;

Script43.field = new MFNode();

Script43.field[0] = field44;

let field46 = browser.currentScene.createNode("field");
field46.name = "endnode";
field46.accessType = "initializeOnly";
field46.type = "SFNode";
let Group47 = browser.currentScene.createNode("Group");
Group47.USE = "DECLpoint_G2_node";
field46.children = new MFNode();

field46.children[0] = Group47;

Script43.field[1] = field46;

let field48 = browser.currentScene.createNode("field");
field48.name = "position";
field48.accessType = "inputOutput";
field48.type = "SFNode";
let Transform49 = browser.currentScene.createNode("Transform");
Transform49.USE = "DECLx3dconnector_connector1_trans";
field48.children = new MFNode();

field48.children[0] = Transform49;

Script43.field[2] = field48;

let field50 = browser.currentScene.createNode("field");
field50.name = "rotscale";
field50.accessType = "inputOutput";
field50.type = "SFNode";
let Transform51 = browser.currentScene.createNode("Transform");
Transform51.USE = "DECLx3dconnector_connector1_rotscale";
field50.children = new MFNode();

field50.children[0] = Transform51;

Script43.field[3] = field50;

let field52 = browser.currentScene.createNode("field");
field52.name = "set_startpoint";
field52.accessType = "inputOnly";
field52.type = "SFVec3f";
Script43.field[4] = field52;

let field53 = browser.currentScene.createNode("field");
field53.name = "set_endpoint";
field53.accessType = "inputOnly";
field53.type = "SFVec3f";
Script43.field[5] = field53;


Script43.setSourceCode(`ecmascript:\n"+
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
"	      position.translation = trafo.translation;\n"+
"	      rotscale.rotation = trafo.rotation;\n"+
"	      rotscale.scale = trafo.scale;\n"+
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
Group36.children[1] = Script43;

browser.currentScene.children[4] = Group36;

let ROUTE54 = browser.currentScene.createNode("ROUTE");
ROUTE54.fromNode = "DECLpoint_G1_node";
ROUTE54.fromField = "translation";
ROUTE54.toNode = "DECLx3dconnector_connector1_S1";
ROUTE54.toField = "set_startpoint";
browser.currentScene.children[5] = ROUTE54;

let ROUTE55 = browser.currentScene.createNode("ROUTE");
ROUTE55.fromNode = "DECLpoint_G2_node";
ROUTE55.fromField = "translation";
ROUTE55.toNode = "DECLx3dconnector_connector1_S1";
ROUTE55.toField = "set_endpoint";
browser.currentScene.children[6] = ROUTE55;

