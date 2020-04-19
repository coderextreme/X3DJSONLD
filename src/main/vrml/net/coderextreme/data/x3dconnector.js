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
Shape5 = browser.currentScene.createNode("Shape");
Appearance6 = browser.currentScene.createNode("Appearance");
Material7 = browser.currentScene.createNode("Material");
Material7.diffuseColor = [0.7,0.2,0.2];
Appearance6.material = Material7;

Shape5.appearance = Appearance6;

Sphere8 = browser.currentScene.createNode("Sphere");
Sphere8.radius = 0.1;
Shape5.geometry = Sphere8;

Transform4.children = [];

Transform4.children[0] = Shape5;

PlaneSensor9 = browser.currentScene.createNode("PlaneSensor");
PlaneSensor9.description = "Grab to move";
PlaneSensor9.DEF = "PS1";
Transform4.children[1] = PlaneSensor9;

ROUTE10 = browser.currentScene.createNode("ROUTE");
ROUTE10.fromNode = "PS1";
ROUTE10.fromField = "translation_changed";
ROUTE10.toNode = "G1";
ROUTE10.toField = "set_translation";
Transform4.children[2] = ROUTE10;

browser.currentScene.children[2] = Transform4;

Transform11 = browser.currentScene.createNode("Transform");
Transform11.DEF = "G2";
Transform11.translation = [1,-1,0.01];
Shape12 = browser.currentScene.createNode("Shape");
Appearance13 = browser.currentScene.createNode("Appearance");
Material14 = browser.currentScene.createNode("Material");
Material14.diffuseColor = [0.2,0.7,0.2];
Appearance13.material = Material14;

Shape12.appearance = Appearance13;

Sphere15 = browser.currentScene.createNode("Sphere");
Sphere15.radius = 0.1;
Shape12.geometry = Sphere15;

Transform11.children = [];

Transform11.children[0] = Shape12;

PlaneSensor16 = browser.currentScene.createNode("PlaneSensor");
PlaneSensor16.description = "Grab to move";
PlaneSensor16.offset = [1,-1,0.01];
PlaneSensor16.DEF = "PS2";
Transform11.children[1] = PlaneSensor16;

ROUTE17 = browser.currentScene.createNode("ROUTE");
ROUTE17.fromNode = "PS2";
ROUTE17.fromField = "translation_changed";
ROUTE17.toNode = "G2";
ROUTE17.toField = "set_translation";
Transform11.children[2] = ROUTE17;

browser.currentScene.children[3] = Transform11;

Transform18 = browser.currentScene.createNode("Transform");
Transform18.DEF = "transC1";
Transform19 = browser.currentScene.createNode("Transform");
Transform19.DEF = "rotscaleC1";
Shape20 = browser.currentScene.createNode("Shape");
Appearance21 = browser.currentScene.createNode("Appearance");
Material22 = browser.currentScene.createNode("Material");
Material22.diffuseColor = [0.2,0.7,0.7];
Material22.transparency = 0.5;
Appearance21.material = Material22;

Shape20.appearance = Appearance21;

Cylinder23 = browser.currentScene.createNode("Cylinder");
Cylinder23.radius = 0.05;
Shape20.geometry = Cylinder23;

Transform19.children = [];

Transform19.children[0] = Shape20;

Transform18.children = [];

Transform18.children[0] = Transform19;

browser.currentScene.children[4] = Transform18;

ProtoDeclare24 = browser.currentScene.createNode("ProtoDeclare");
ProtoDeclare24.name = "x3dconnector";
ProtoInterface25 = browser.currentScene.createNode("ProtoInterface");
field26 = browser.currentScene.createNode("field");
field26.name = "startnode";
field26.accessType = "initializeOnly";
field26.type = "SFNode";
ProtoInterface25.field = [];

ProtoInterface25.field[0] = field26;

field27 = browser.currentScene.createNode("field");
field27.name = "endnode";
field27.accessType = "initializeOnly";
field27.type = "SFNode";
ProtoInterface25.field[1] = field27;

field28 = browser.currentScene.createNode("field");
field28.name = "transnode";
field28.accessType = "initializeOnly";
field28.type = "SFNode";
ProtoInterface25.field[2] = field28;

field29 = browser.currentScene.createNode("field");
field29.name = "rotscalenode";
field29.accessType = "initializeOnly";
field29.type = "SFNode";
ProtoInterface25.field[3] = field29;

field30 = browser.currentScene.createNode("field");
field30.name = "set_startpoint";
field30.accessType = "inputOnly";
field30.type = "SFVec3f";
ProtoInterface25.field[4] = field30;

field31 = browser.currentScene.createNode("field");
field31.name = "set_endpoint";
field31.accessType = "inputOnly";
field31.type = "SFVec3f";
ProtoInterface25.field[5] = field31;

ProtoDeclare24.protoInterface = ProtoInterface25;

ProtoBody32 = browser.currentScene.createNode("ProtoBody");
Script33 = browser.currentScene.createNode("Script");
Script33.DEF = "S1";
field34 = browser.currentScene.createNode("field");
field34.name = "startnode";
field34.accessType = "initializeOnly";
field34.type = "SFNode";
Script33.field = [];

Script33.field[0] = field34;

field35 = browser.currentScene.createNode("field");
field35.name = "endnode";
field35.accessType = "initializeOnly";
field35.type = "SFNode";
Script33.field[1] = field35;

field36 = browser.currentScene.createNode("field");
field36.name = "transnode";
field36.accessType = "initializeOnly";
field36.type = "SFNode";
Script33.field[2] = field36;

field37 = browser.currentScene.createNode("field");
field37.name = "rotscalenode";
field37.accessType = "initializeOnly";
field37.type = "SFNode";
Script33.field[3] = field37;

field38 = browser.currentScene.createNode("field");
field38.name = "set_startpoint";
field38.accessType = "inputOnly";
field38.type = "SFVec3f";
Script33.field[4] = field38;

field39 = browser.currentScene.createNode("field");
field39.name = "set_endpoint";
field39.accessType = "inputOnly";
field39.type = "SFVec3f";
Script33.field[5] = field39;

IS40 = browser.currentScene.createNode("IS");
connect41 = browser.currentScene.createNode("connect");
connect41.nodeField = "startnode";
connect41.protoField = "startnode";
IS40.connect = [];

IS40.connect[0] = connect41;

connect42 = browser.currentScene.createNode("connect");
connect42.nodeField = "endnode";
connect42.protoField = "endnode";
IS40.connect[1] = connect42;

connect43 = browser.currentScene.createNode("connect");
connect43.nodeField = "transnode";
connect43.protoField = "transnode";
IS40.connect[2] = connect43;

connect44 = browser.currentScene.createNode("connect");
connect44.nodeField = "rotscalenode";
connect44.protoField = "rotscalenode";
IS40.connect[3] = connect44;

connect45 = browser.currentScene.createNode("connect");
connect45.nodeField = "set_startpoint";
connect45.protoField = "set_startpoint";
IS40.connect[4] = connect45;

connect46 = browser.currentScene.createNode("connect");
connect46.nodeField = "set_endpoint";
connect46.protoField = "set_endpoint";
IS40.connect[5] = connect46;

Script33.iS = IS40;


Script33.setSourceCode(`ecmascript:\n"+
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
ProtoBody32.children = [];

ProtoBody32.children[0] = Script33;

ProtoDeclare24.protoBody = ProtoBody32;

browser.currentScene.children[5] = ProtoDeclare24;

ProtoInstance47 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance47.name = "x3dconnector";
ProtoInstance47.DEF = "connector1";
fieldValue48 = browser.currentScene.createNode("fieldValue");
fieldValue48.name = "startnode";
Transform49 = browser.currentScene.createNode("Transform");
Transform49.USE = "G1";
fieldValue48.children = [];

fieldValue48.children[0] = Transform49;

ProtoInstance47.fieldValue = [];

ProtoInstance47.fieldValue[0] = fieldValue48;

fieldValue50 = browser.currentScene.createNode("fieldValue");
fieldValue50.name = "endnode";
Transform51 = browser.currentScene.createNode("Transform");
Transform51.USE = "G2";
fieldValue50.children = [];

fieldValue50.children[0] = Transform51;

ProtoInstance47.fieldValue[1] = fieldValue50;

fieldValue52 = browser.currentScene.createNode("fieldValue");
fieldValue52.name = "transnode";
Transform53 = browser.currentScene.createNode("Transform");
Transform53.USE = "transC1";
fieldValue52.children = [];

fieldValue52.children[0] = Transform53;

ProtoInstance47.fieldValue[2] = fieldValue52;

fieldValue54 = browser.currentScene.createNode("fieldValue");
fieldValue54.name = "rotscalenode";
Transform55 = browser.currentScene.createNode("Transform");
Transform55.USE = "rotscaleC1";
fieldValue54.children = [];

fieldValue54.children[0] = Transform55;

ProtoInstance47.fieldValue[3] = fieldValue54;

fieldValue56 = browser.currentScene.createNode("fieldValue");
fieldValue56.name = "set_startpoint";
ProtoInstance47.fieldValue[4] = fieldValue56;

fieldValue57 = browser.currentScene.createNode("fieldValue");
fieldValue57.name = "set_endpoint";
ProtoInstance47.fieldValue[5] = fieldValue57;

browser.currentScene.children[6] = ProtoInstance47;

ROUTE58 = browser.currentScene.createNode("ROUTE");
ROUTE58.fromNode = "G1";
ROUTE58.fromField = "translation_changed";
ROUTE58.toNode = "connector1";
ROUTE58.toField = "set_startpoint";
browser.currentScene.children[7] = ROUTE58;

ROUTE59 = browser.currentScene.createNode("ROUTE");
ROUTE59.fromNode = "G2";
ROUTE59.fromField = "translation_changed";
ROUTE59.toNode = "connector1";
ROUTE59.toField = "set_endpoint";
browser.currentScene.children[8] = ROUTE59;

