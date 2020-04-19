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

ProtoDeclare4 = browser.currentScene.createNode("ProtoDeclare");
ProtoDeclare4.name = "point";
ProtoInterface5 = browser.currentScene.createNode("ProtoInterface");
field6 = browser.currentScene.createNode("field");
field6.name = "translation";
field6.accessType = "inputOutput";
field6.type = "SFVec3f";
field6.value = "0 0 0";
ProtoInterface5.field = [];

ProtoInterface5.field[0] = field6;

ProtoDeclare4.protoInterface = ProtoInterface5;

ProtoBody7 = browser.currentScene.createNode("ProtoBody");
Transform8 = browser.currentScene.createNode("Transform");
Transform8.DEF = "node";
IS9 = browser.currentScene.createNode("IS");
connect10 = browser.currentScene.createNode("connect");
connect10.nodeField = "translation";
connect10.protoField = "translation";
IS9.connect = [];

IS9.connect[0] = connect10;

Transform8.iS = IS9;

Shape11 = browser.currentScene.createNode("Shape");
Sphere12 = browser.currentScene.createNode("Sphere");
Sphere12.radius = 0.1;
Shape11.geometry = Sphere12;

Appearance13 = browser.currentScene.createNode("Appearance");
Material14 = browser.currentScene.createNode("Material");
Material14.diffuseColor = [1,0,0];
Appearance13.material = Material14;

Shape11.appearance = Appearance13;

Transform8.children = [];

Transform8.children[0] = Shape11;

PositionInterpolator15 = browser.currentScene.createNode("PositionInterpolator");
PositionInterpolator15.DEF = "PI1";
PositionInterpolator15.key = [0,1];
PositionInterpolator15.keyValue = [0,0,0,0,5,0];
Transform8.children[1] = PositionInterpolator15;

Script16 = browser.currentScene.createNode("Script");
Script16.DEF = "MB1";
field17 = browser.currentScene.createNode("field");
field17.name = "translation";
field17.accessType = "inputOutput";
field17.type = "SFVec3f";
field17.value = "50 50 0";
Script16.field = [];

Script16.field[0] = field17;

field18 = browser.currentScene.createNode("field");
field18.name = "old";
field18.accessType = "inputOutput";
field18.type = "SFVec3f";
field18.value = "0 0 0";
Script16.field[1] = field18;

field19 = browser.currentScene.createNode("field");
field19.name = "set_location";
field19.accessType = "inputOnly";
field19.type = "SFTime";
Script16.field[2] = field19;

field20 = browser.currentScene.createNode("field");
field20.name = "keyValue";
field20.accessType = "inputOutput";
field20.type = "MFVec3f";
field20.value = "0 0 0 0 5 0";
Script16.field[3] = field20;


Script16.setSourceCode(`ecmascript:\n"+
"               function set_location(value) {\n"+
"                    old = translation;\n"+
"                    translation = new SFVec3f(Math.random()*10-5, Math.random()*10-5, Math.random()*10-5);\n"+
"                    keyValue = new MFVec3f([old, translation]);\n"+
"               }`)
Transform8.children[2] = Script16;

TimeSensor21 = browser.currentScene.createNode("TimeSensor");
TimeSensor21.DEF = "CL1";
TimeSensor21.cycleInterval = 3;
TimeSensor21.loop = True;
Transform8.children[3] = TimeSensor21;

ROUTE22 = browser.currentScene.createNode("ROUTE");
ROUTE22.fromNode = "CL1";
ROUTE22.fromField = "cycleTime";
ROUTE22.toNode = "MB1";
ROUTE22.toField = "set_location";
Transform8.children[4] = ROUTE22;

ROUTE23 = browser.currentScene.createNode("ROUTE");
ROUTE23.fromNode = "CL1";
ROUTE23.fromField = "fraction_changed";
ROUTE23.toNode = "PI1";
ROUTE23.toField = "set_fraction";
Transform8.children[5] = ROUTE23;

ROUTE24 = browser.currentScene.createNode("ROUTE");
ROUTE24.fromNode = "MB1";
ROUTE24.fromField = "keyValue";
ROUTE24.toNode = "PI1";
ROUTE24.toField = "keyValue";
Transform8.children[6] = ROUTE24;

ROUTE25 = browser.currentScene.createNode("ROUTE");
ROUTE25.fromNode = "PI1";
ROUTE25.fromField = "value_changed";
ROUTE25.toNode = "node";
ROUTE25.toField = "set_translation";
Transform8.children[7] = ROUTE25;

ROUTE26 = browser.currentScene.createNode("ROUTE");
ROUTE26.fromNode = "MB1";
ROUTE26.fromField = "translation_changed";
ROUTE26.toNode = "node";
ROUTE26.toField = "set_translation";
Transform8.children[8] = ROUTE26;

ProtoBody7.children = [];

ProtoBody7.children[0] = Transform8;

ProtoDeclare4.protoBody = ProtoBody7;

browser.currentScene.children[2] = ProtoDeclare4;

Transform27 = browser.currentScene.createNode("Transform");
Transform27.DEF = "G1";
ProtoInstance28 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance28.name = "point";
Transform27.children = [];

Transform27.children[0] = ProtoInstance28;

browser.currentScene.children[3] = Transform27;

Transform29 = browser.currentScene.createNode("Transform");
Transform29.DEF = "G2";
ProtoInstance30 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance30.name = "point";
Transform29.children = [];

Transform29.children[0] = ProtoInstance30;

browser.currentScene.children[4] = Transform29;

Transform31 = browser.currentScene.createNode("Transform");
Transform31.DEF = "transC1";
Transform32 = browser.currentScene.createNode("Transform");
Transform32.DEF = "rotscaleC1";
Shape33 = browser.currentScene.createNode("Shape");
Appearance34 = browser.currentScene.createNode("Appearance");
Material35 = browser.currentScene.createNode("Material");
Material35.diffuseColor = [0.2,0.7,0.7];
Material35.transparency = 0.5;
Appearance34.material = Material35;

Shape33.appearance = Appearance34;

Cylinder36 = browser.currentScene.createNode("Cylinder");
Cylinder36.radius = 0.05;
Shape33.geometry = Cylinder36;

Transform32.children = [];

Transform32.children[0] = Shape33;

Transform31.children = [];

Transform31.children[0] = Transform32;

browser.currentScene.children[5] = Transform31;

ProtoDeclare37 = browser.currentScene.createNode("ProtoDeclare");
ProtoDeclare37.name = "x3dconnector";
ProtoInterface38 = browser.currentScene.createNode("ProtoInterface");
field39 = browser.currentScene.createNode("field");
field39.name = "startnode";
field39.accessType = "initializeOnly";
field39.type = "SFNode";
ProtoInterface38.field = [];

ProtoInterface38.field[0] = field39;

field40 = browser.currentScene.createNode("field");
field40.name = "endnode";
field40.accessType = "initializeOnly";
field40.type = "SFNode";
ProtoInterface38.field[1] = field40;

field41 = browser.currentScene.createNode("field");
field41.name = "transnode";
field41.accessType = "inputOutput";
field41.type = "SFNode";
ProtoInterface38.field[2] = field41;

field42 = browser.currentScene.createNode("field");
field42.name = "rotscalenode";
field42.accessType = "inputOutput";
field42.type = "SFNode";
ProtoInterface38.field[3] = field42;

field43 = browser.currentScene.createNode("field");
field43.name = "set_startpoint";
field43.accessType = "inputOnly";
field43.type = "SFVec3f";
ProtoInterface38.field[4] = field43;

field44 = browser.currentScene.createNode("field");
field44.name = "set_endpoint";
field44.accessType = "inputOnly";
field44.type = "SFVec3f";
ProtoInterface38.field[5] = field44;

ProtoDeclare37.protoInterface = ProtoInterface38;

ProtoBody45 = browser.currentScene.createNode("ProtoBody");
Script46 = browser.currentScene.createNode("Script");
Script46.DEF = "S1";
field47 = browser.currentScene.createNode("field");
field47.name = "startnode";
field47.accessType = "initializeOnly";
field47.type = "SFNode";
Script46.field = [];

Script46.field[0] = field47;

field48 = browser.currentScene.createNode("field");
field48.name = "endnode";
field48.accessType = "initializeOnly";
field48.type = "SFNode";
Script46.field[1] = field48;

field49 = browser.currentScene.createNode("field");
field49.name = "transnode";
field49.accessType = "initializeOnly";
field49.type = "SFNode";
Script46.field[2] = field49;

field50 = browser.currentScene.createNode("field");
field50.name = "rotscalenode";
field50.accessType = "initializeOnly";
field50.type = "SFNode";
Script46.field[3] = field50;

field51 = browser.currentScene.createNode("field");
field51.name = "set_startpoint";
field51.accessType = "inputOnly";
field51.type = "SFVec3f";
Script46.field[4] = field51;

field52 = browser.currentScene.createNode("field");
field52.name = "set_endpoint";
field52.accessType = "inputOnly";
field52.type = "SFVec3f";
Script46.field[5] = field52;

IS53 = browser.currentScene.createNode("IS");
connect54 = browser.currentScene.createNode("connect");
connect54.nodeField = "startnode";
connect54.protoField = "startnode";
IS53.connect = [];

IS53.connect[0] = connect54;

connect55 = browser.currentScene.createNode("connect");
connect55.nodeField = "endnode";
connect55.protoField = "endnode";
IS53.connect[1] = connect55;

connect56 = browser.currentScene.createNode("connect");
connect56.nodeField = "transnode";
connect56.protoField = "transnode";
IS53.connect[2] = connect56;

connect57 = browser.currentScene.createNode("connect");
connect57.nodeField = "rotscalenode";
connect57.protoField = "rotscalenode";
IS53.connect[3] = connect57;

connect58 = browser.currentScene.createNode("connect");
connect58.nodeField = "set_startpoint";
connect58.protoField = "set_startpoint";
IS53.connect[4] = connect58;

connect59 = browser.currentScene.createNode("connect");
connect59.nodeField = "set_endpoint";
connect59.protoField = "set_endpoint";
IS53.connect[5] = connect59;

Script46.iS = IS53;


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
"	      transnode.translation = trafo.translation;\n"+
"	      rotscalenode.rotation = trafo.rotation;\n"+
"	      rotscalenode.scale = trafo.scale;\n"+
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
ProtoBody45.children = [];

ProtoBody45.children[0] = Script46;

ProtoDeclare37.protoBody = ProtoBody45;

browser.currentScene.children[6] = ProtoDeclare37;

ProtoInstance60 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance60.name = "x3dconnector";
ProtoInstance60.DEF = "connector1";
fieldValue61 = browser.currentScene.createNode("fieldValue");
fieldValue61.name = "startnode";
Transform62 = browser.currentScene.createNode("Transform");
Transform62.USE = "G1";
fieldValue61.children = [];

fieldValue61.children[0] = Transform62;

ProtoInstance60.fieldValue = [];

ProtoInstance60.fieldValue[0] = fieldValue61;

fieldValue63 = browser.currentScene.createNode("fieldValue");
fieldValue63.name = "endnode";
Transform64 = browser.currentScene.createNode("Transform");
Transform64.USE = "G2";
fieldValue63.children = [];

fieldValue63.children[0] = Transform64;

ProtoInstance60.fieldValue[1] = fieldValue63;

fieldValue65 = browser.currentScene.createNode("fieldValue");
fieldValue65.name = "transnode";
Transform66 = browser.currentScene.createNode("Transform");
Transform66.USE = "transC1";
fieldValue65.children = [];

fieldValue65.children[0] = Transform66;

ProtoInstance60.fieldValue[2] = fieldValue65;

fieldValue67 = browser.currentScene.createNode("fieldValue");
fieldValue67.name = "rotscalenode";
Transform68 = browser.currentScene.createNode("Transform");
Transform68.USE = "rotscaleC1";
fieldValue67.children = [];

fieldValue67.children[0] = Transform68;

ProtoInstance60.fieldValue[3] = fieldValue67;

fieldValue69 = browser.currentScene.createNode("fieldValue");
fieldValue69.name = "set_startpoint";
ProtoInstance60.fieldValue[4] = fieldValue69;

fieldValue70 = browser.currentScene.createNode("fieldValue");
fieldValue70.name = "set_endpoint";
ProtoInstance60.fieldValue[5] = fieldValue70;

browser.currentScene.children[7] = ProtoInstance60;

ROUTE71 = browser.currentScene.createNode("ROUTE");
ROUTE71.fromNode = "G1";
ROUTE71.fromField = "translation_changed";
ROUTE71.toNode = "connector1";
ROUTE71.toField = "set_startpoint";
browser.currentScene.children[8] = ROUTE71;

ROUTE72 = browser.currentScene.createNode("ROUTE");
ROUTE72.fromNode = "G2";
ROUTE72.fromField = "translation_changed";
ROUTE72.toNode = "connector1";
ROUTE72.toField = "set_endpoint";
browser.currentScene.children[9] = ROUTE72;

