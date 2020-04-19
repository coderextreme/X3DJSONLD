var browser = X3D.getBrowser();
var X3D0 = {};
X3D0.profile = "Immersive";
X3D0.version = "3.3";
Viewpoint2 = browser.currentScene.createNode("Viewpoint");
Viewpoint2.position = [0,0,5];
Viewpoint2.description = "Only Viewpoint";
browser.currentScene.children = [];

browser.currentScene.children[0] = Viewpoint2;

Background3 = browser.currentScene.createNode("Background");
Background3.skyColor = [0.4,0.4,0.4];
browser.currentScene.children[1] = Background3;

Transform4 = browser.currentScene.createNode("Transform");
Transform4.DEF = "G1";
Transform5 = browser.currentScene.createNode("Transform");
Transform5.DEF = "DECLpoint_INSTANCE_node";
Shape6 = browser.currentScene.createNode("Shape");
Sphere7 = browser.currentScene.createNode("Sphere");
Sphere7.radius = 0.1;
Shape6.geometry = Sphere7;

Appearance8 = browser.currentScene.createNode("Appearance");
Material9 = browser.currentScene.createNode("Material");
Material9.diffuseColor = [1,0,0];
Appearance8.material = Material9;

Shape6.appearance = Appearance8;

Transform5.children = [];

Transform5.children[0] = Shape6;

PositionInterpolator10 = browser.currentScene.createNode("PositionInterpolator");
PositionInterpolator10.DEF = "DECLpoint_INSTANCE_PI1";
PositionInterpolator10.key = [0,1];
PositionInterpolator10.keyValue = [0,0,0,0,5,0];
Transform5.children[1] = PositionInterpolator10;

Script11 = browser.currentScene.createNode("Script");
Script11.DEF = "DECLpoint_INSTANCE_MB1";
field12 = browser.currentScene.createNode("field");
field12.name = "translation";
field12.accessType = "inputOutput";
field12.type = "SFVec3f";
field12.value = "0 0 0";
Script11.field = [];

Script11.field[0] = field12;

field13 = browser.currentScene.createNode("field");
field13.name = "old";
field13.accessType = "inputOutput";
field13.type = "SFVec3f";
field13.value = "0 0 0";
Script11.field[1] = field13;

field14 = browser.currentScene.createNode("field");
field14.name = "set_location";
field14.accessType = "inputOnly";
field14.type = "SFTime";
Script11.field[2] = field14;

field15 = browser.currentScene.createNode("field");
field15.name = "keyValue";
field15.accessType = "inputOutput";
field15.type = "MFVec3f";
field15.value = "0 0 0 0 5 0";
Script11.field[3] = field15;


Script11.setSourceCode(`ecmascript:\n"+
"               function set_location(value) {\n"+
"                    old = translation;\n"+
"                    translation = new SFVec3f(Math.random()*10-5, Math.random()*10-5, Math.random()*10-5);\n"+
"                    keyValue = new MFVec3f(old, translation);\n"+
"               }`)
Transform5.children[2] = Script11;

TimeSensor16 = browser.currentScene.createNode("TimeSensor");
TimeSensor16.DEF = "DECLpoint_INSTANCE_CL1";
TimeSensor16.cycleInterval = 3;
TimeSensor16.loop = True;
Transform5.children[3] = TimeSensor16;

ROUTE17 = browser.currentScene.createNode("ROUTE");
ROUTE17.fromNode = "DECLpoint_INSTANCE_CL1";
ROUTE17.fromField = "cycleTime";
ROUTE17.toNode = "DECLpoint_INSTANCE_MB1";
ROUTE17.toField = "set_location";
Transform5.children[4] = ROUTE17;

ROUTE18 = browser.currentScene.createNode("ROUTE");
ROUTE18.fromNode = "DECLpoint_INSTANCE_CL1";
ROUTE18.fromField = "fraction_changed";
ROUTE18.toNode = "DECLpoint_INSTANCE_PI1";
ROUTE18.toField = "set_fraction";
Transform5.children[5] = ROUTE18;

ROUTE19 = browser.currentScene.createNode("ROUTE");
ROUTE19.fromNode = "DECLpoint_INSTANCE_MB1";
ROUTE19.fromField = "keyValue";
ROUTE19.toNode = "DECLpoint_INSTANCE_PI1";
ROUTE19.toField = "keyValue";
Transform5.children[6] = ROUTE19;

ROUTE20 = browser.currentScene.createNode("ROUTE");
ROUTE20.fromNode = "DECLpoint_INSTANCE_PI1";
ROUTE20.fromField = "value_changed";
ROUTE20.toNode = "DECLpoint_INSTANCE_node";
ROUTE20.toField = "set_translation";
Transform5.children[7] = ROUTE20;

ROUTE21 = browser.currentScene.createNode("ROUTE");
ROUTE21.fromNode = "DECLpoint_INSTANCE_MB1";
ROUTE21.fromField = "translation_changed";
ROUTE21.toNode = "DECLpoint_INSTANCE_node";
ROUTE21.toField = "set_translation";
Transform5.children[8] = ROUTE21;

Transform4.children = [];

Transform4.children[0] = Transform5;

browser.currentScene.children[2] = Transform4;

Transform22 = browser.currentScene.createNode("Transform");
Transform22.DEF = "G2";
Transform23 = browser.currentScene.createNode("Transform");
Transform23.DEF = "DECLpoint_INSTANCE1000_node";
Shape24 = browser.currentScene.createNode("Shape");
Sphere25 = browser.currentScene.createNode("Sphere");
Sphere25.radius = 0.1;
Shape24.geometry = Sphere25;

Appearance26 = browser.currentScene.createNode("Appearance");
Material27 = browser.currentScene.createNode("Material");
Material27.diffuseColor = [1,0,0];
Appearance26.material = Material27;

Shape24.appearance = Appearance26;

Transform23.children = [];

Transform23.children[0] = Shape24;

PositionInterpolator28 = browser.currentScene.createNode("PositionInterpolator");
PositionInterpolator28.DEF = "DECLpoint_INSTANCE1000_PI1";
PositionInterpolator28.key = [0,1];
PositionInterpolator28.keyValue = [0,0,0,0,5,0];
Transform23.children[1] = PositionInterpolator28;

Script29 = browser.currentScene.createNode("Script");
Script29.DEF = "DECLpoint_INSTANCE1000_MB1";
field30 = browser.currentScene.createNode("field");
field30.name = "translation";
field30.accessType = "inputOutput";
field30.type = "SFVec3f";
field30.value = "0 0 0";
Script29.field = [];

Script29.field[0] = field30;

field31 = browser.currentScene.createNode("field");
field31.name = "old";
field31.accessType = "inputOutput";
field31.type = "SFVec3f";
field31.value = "0 0 0";
Script29.field[1] = field31;

field32 = browser.currentScene.createNode("field");
field32.name = "set_location";
field32.accessType = "inputOnly";
field32.type = "SFTime";
Script29.field[2] = field32;

field33 = browser.currentScene.createNode("field");
field33.name = "keyValue";
field33.accessType = "inputOutput";
field33.type = "MFVec3f";
field33.value = "0 0 0 0 5 0";
Script29.field[3] = field33;


Script29.setSourceCode(`ecmascript:\n"+
"               function set_location(value) {\n"+
"                    old = translation;\n"+
"                    translation = new SFVec3f(Math.random()*10-5, Math.random()*10-5, Math.random()*10-5);\n"+
"                    keyValue = new MFVec3f(old, translation);\n"+
"               }`)
Transform23.children[2] = Script29;

TimeSensor34 = browser.currentScene.createNode("TimeSensor");
TimeSensor34.DEF = "DECLpoint_INSTANCE1000_CL1";
TimeSensor34.cycleInterval = 3;
TimeSensor34.loop = True;
Transform23.children[3] = TimeSensor34;

ROUTE35 = browser.currentScene.createNode("ROUTE");
ROUTE35.fromNode = "DECLpoint_INSTANCE1000_CL1";
ROUTE35.fromField = "cycleTime";
ROUTE35.toNode = "DECLpoint_INSTANCE1000_MB1";
ROUTE35.toField = "set_location";
Transform23.children[4] = ROUTE35;

ROUTE36 = browser.currentScene.createNode("ROUTE");
ROUTE36.fromNode = "DECLpoint_INSTANCE1000_CL1";
ROUTE36.fromField = "fraction_changed";
ROUTE36.toNode = "DECLpoint_INSTANCE1000_PI1";
ROUTE36.toField = "set_fraction";
Transform23.children[5] = ROUTE36;

ROUTE37 = browser.currentScene.createNode("ROUTE");
ROUTE37.fromNode = "DECLpoint_INSTANCE1000_MB1";
ROUTE37.fromField = "keyValue";
ROUTE37.toNode = "DECLpoint_INSTANCE1000_PI1";
ROUTE37.toField = "keyValue";
Transform23.children[6] = ROUTE37;

ROUTE38 = browser.currentScene.createNode("ROUTE");
ROUTE38.fromNode = "DECLpoint_INSTANCE1000_PI1";
ROUTE38.fromField = "value_changed";
ROUTE38.toNode = "DECLpoint_INSTANCE1000_node";
ROUTE38.toField = "set_translation";
Transform23.children[7] = ROUTE38;

ROUTE39 = browser.currentScene.createNode("ROUTE");
ROUTE39.fromNode = "DECLpoint_INSTANCE1000_MB1";
ROUTE39.fromField = "translation_changed";
ROUTE39.toNode = "DECLpoint_INSTANCE1000_node";
ROUTE39.toField = "set_translation";
Transform23.children[8] = ROUTE39;

Transform22.children = [];

Transform22.children[0] = Transform23;

browser.currentScene.children[3] = Transform22;

Transform40 = browser.currentScene.createNode("Transform");
Transform40.DEF = "transC1";
Transform41 = browser.currentScene.createNode("Transform");
Transform41.DEF = "rotscaleC1";
Shape42 = browser.currentScene.createNode("Shape");
Appearance43 = browser.currentScene.createNode("Appearance");
Material44 = browser.currentScene.createNode("Material");
Material44.diffuseColor = [0.2,0.7,0.7];
Material44.transparency = 0.5;
Appearance43.material = Material44;

Shape42.appearance = Appearance43;

Cylinder45 = browser.currentScene.createNode("Cylinder");
Cylinder45.radius = 0.05;
Shape42.geometry = Cylinder45;

Transform41.children = [];

Transform41.children[0] = Shape42;

Transform40.children = [];

Transform40.children[0] = Transform41;

browser.currentScene.children[4] = Transform40;

Script46 = browser.currentScene.createNode("Script");
Script46.DEF = "DECLx3dconnector_connector1_S1";
field47 = browser.currentScene.createNode("field");
field47.name = "startnode";
field47.accessType = "initializeOnly";
field47.type = "SFNode";
Transform48 = browser.currentScene.createNode("Transform");
Transform48.USE = "G1";
field47.children = [];

field47.children[0] = Transform48;

Script46.field = [];

Script46.field[0] = field47;

field49 = browser.currentScene.createNode("field");
field49.name = "endnode";
field49.accessType = "initializeOnly";
field49.type = "SFNode";
Transform50 = browser.currentScene.createNode("Transform");
Transform50.USE = "G2";
field49.children = [];

field49.children[0] = Transform50;

Script46.field[1] = field49;

field51 = browser.currentScene.createNode("field");
field51.name = "transC1";
field51.accessType = "initializeOnly";
field51.type = "SFNode";
Transform52 = browser.currentScene.createNode("Transform");
Transform52.USE = "transC1";
field51.children = [];

field51.children[0] = Transform52;

Script46.field[2] = field51;

field53 = browser.currentScene.createNode("field");
field53.name = "rotscaleC1";
field53.accessType = "initializeOnly";
field53.type = "SFNode";
Transform54 = browser.currentScene.createNode("Transform");
Transform54.USE = "rotscaleC1";
field53.children = [];

field53.children[0] = Transform54;

Script46.field[3] = field53;

field55 = browser.currentScene.createNode("field");
field55.name = "set_startpoint";
field55.accessType = "inputOnly";
field55.type = "SFVec3f";
Script46.field[4] = field55;

field56 = browser.currentScene.createNode("field");
field56.name = "set_endpoint";
field56.accessType = "inputOnly";
field56.type = "SFVec3f";
Script46.field[5] = field56;


Script46.setSourceCode(`ecmascript:\n"+
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
browser.currentScene.children[5] = Script46;

ROUTE57 = browser.currentScene.createNode("ROUTE");
ROUTE57.fromNode = "G1";
ROUTE57.fromField = "translation_changed";
ROUTE57.toNode = "DECLx3dconnector_connector1_S1";
ROUTE57.toField = "set_startpoint";
browser.currentScene.children[6] = ROUTE57;

ROUTE58 = browser.currentScene.createNode("ROUTE");
ROUTE58.fromNode = "G2";
ROUTE58.fromField = "translation_changed";
ROUTE58.toNode = "DECLx3dconnector_connector1_S1";
ROUTE58.toField = "set_endpoint";
browser.currentScene.children[7] = ROUTE58;

