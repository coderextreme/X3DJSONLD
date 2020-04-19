var browser = X3D.getBrowser();
var X3D0 = {};
X3D0.profile = "Immersive";
X3D0.version = "3.3";
ProtoDeclare2 = browser.currentScene.createNode("ProtoDeclare");
ProtoDeclare2.name = "node";
ProtoInterface3 = browser.currentScene.createNode("ProtoInterface");
field4 = browser.currentScene.createNode("field");
field4.name = "position";
field4.accessType = "inputOutput";
field4.type = "SFVec3f";
field4.value = "0 0 0";
ProtoInterface3.field = [];

ProtoInterface3.field[0] = field4;

ProtoDeclare2.protoInterface = ProtoInterface3;

ProtoBody5 = browser.currentScene.createNode("ProtoBody");
Transform6 = browser.currentScene.createNode("Transform");
Transform6.DEF = "transform";
IS7 = browser.currentScene.createNode("IS");
connect8 = browser.currentScene.createNode("connect");
connect8.nodeField = "translation";
connect8.protoField = "position";
IS7.connect = [];

IS7.connect[0] = connect8;

Transform6.iS = IS7;

Shape9 = browser.currentScene.createNode("Shape");
//comment before Sphere
//comment after Sphere
//comment after Appearance
Sphere10 = browser.currentScene.createNode("Sphere");
Shape9.geometry = Sphere10;

Appearance11 = browser.currentScene.createNode("Appearance");
//comment before Material
//comment after Material
Material12 = browser.currentScene.createNode("Material");
Material12.diffuseColor = [1,0,0];
Appearance11.material = Material12;

Shape9.appearance = Appearance11;

Transform6.children = [];

Transform6.children[0] = Shape9;

ProtoBody5.children = [];

ProtoBody5.children[0] = Transform6;

PositionInterpolator13 = browser.currentScene.createNode("PositionInterpolator");
PositionInterpolator13.DEF = "NodePosition";
PositionInterpolator13.key = [0,1];
PositionInterpolator13.keyValue = [0,0,0,0,5,0];
ProtoBody5.children[1] = PositionInterpolator13;

Script14 = browser.currentScene.createNode("Script");
Script14.DEF = "MoveBall";
field15 = browser.currentScene.createNode("field");
field15.name = "translation";
field15.accessType = "inputOutput";
field15.type = "SFVec3f";
field15.value = "50 50 0";
Script14.field = [];

Script14.field[0] = field15;

field16 = browser.currentScene.createNode("field");
field16.name = "old";
field16.accessType = "inputOutput";
field16.type = "SFVec3f";
field16.value = "0 0 0";
Script14.field[1] = field16;

field17 = browser.currentScene.createNode("field");
field17.name = "set_cycle";
field17.accessType = "inputOnly";
field17.type = "SFTime";
Script14.field[2] = field17;

field18 = browser.currentScene.createNode("field");
field18.name = "keyValue";
field18.accessType = "outputOnly";
field18.type = "MFVec3f";
Script14.field[3] = field18;


Script14.setSourceCode(`ecmascript:\n"+
"					function set_cycle(value) {\n"+
"                                                old = translation;\n"+
"						translation = new SFVec3f(Math.random()*100-50, Math.random()*100-50, Math.random()*100-50);\n"+
"                                                keyValue = new MFVec3f([old, translation]);\n"+
"						// Browser.println(translation);\n"+
"					}`)
ProtoBody5.children[2] = Script14;

TimeSensor19 = browser.currentScene.createNode("TimeSensor");
TimeSensor19.DEF = "nodeClock";
TimeSensor19.cycleInterval = 3;
TimeSensor19.loop = True;
ProtoBody5.children[3] = TimeSensor19;

ROUTE20 = browser.currentScene.createNode("ROUTE");
ROUTE20.fromNode = "nodeClock";
ROUTE20.fromField = "cycleTime";
ROUTE20.toNode = "MoveBall";
ROUTE20.toField = "set_cycle";
ProtoBody5.children[4] = ROUTE20;

ROUTE21 = browser.currentScene.createNode("ROUTE");
ROUTE21.fromNode = "nodeClock";
ROUTE21.fromField = "fraction_changed";
ROUTE21.toNode = "NodePosition";
ROUTE21.toField = "set_fraction";
ProtoBody5.children[5] = ROUTE21;

ROUTE22 = browser.currentScene.createNode("ROUTE");
ROUTE22.fromNode = "MoveBall";
ROUTE22.fromField = "keyValue";
ROUTE22.toNode = "NodePosition";
ROUTE22.toField = "keyValue";
ProtoBody5.children[6] = ROUTE22;

ROUTE23 = browser.currentScene.createNode("ROUTE");
ROUTE23.fromNode = "NodePosition";
ROUTE23.fromField = "value_changed";
ROUTE23.toNode = "transform";
ROUTE23.toField = "set_translation";
ProtoBody5.children[7] = ROUTE23;

ProtoDeclare2.protoBody = ProtoBody5;

browser.currentScene.children = [];

browser.currentScene.children[0] = ProtoDeclare2;

ProtoDeclare24 = browser.currentScene.createNode("ProtoDeclare");
ProtoDeclare24.name = "cylinder";
ProtoInterface25 = browser.currentScene.createNode("ProtoInterface");
field26 = browser.currentScene.createNode("field");
field26.name = "positionA";
field26.accessType = "inputOnly";
field26.type = "SFVec3f";
ProtoInterface25.field = [];

ProtoInterface25.field[0] = field26;

field27 = browser.currentScene.createNode("field");
field27.name = "positionB";
field27.accessType = "inputOnly";
field27.type = "SFVec3f";
ProtoInterface25.field[1] = field27;

ProtoDeclare24.protoInterface = ProtoInterface25;

ProtoBody28 = browser.currentScene.createNode("ProtoBody");
Shape29 = browser.currentScene.createNode("Shape");
Extrusion30 = browser.currentScene.createNode("Extrusion");
Extrusion30.DEF = "extrusion";
Extrusion30.creaseAngle = 0.785;
Extrusion30.crossSection = [1,0,0.92,-0.38,0.71,-0.71,0.38,-0.92,0,-1,-0.38,-0.92,-0.71,-0.71,-0.92,-0.38,-1,0,-0.92,0.38,-0.71,0.71,-0.38,0.92,0,1,0.38,0.92,0.71,0.71,0.92,0.38,1,0];
Extrusion30.spine = [0,-50,0,0,0,0,0,50,0];
Shape29.geometry = Extrusion30;

Appearance31 = browser.currentScene.createNode("Appearance");
Material32 = browser.currentScene.createNode("Material");
Material32.diffuseColor = [0,1,0];
Appearance31.material = Material32;

Shape29.appearance = Appearance31;

ProtoBody28.children = [];

ProtoBody28.children[0] = Shape29;

Script33 = browser.currentScene.createNode("Script");
Script33.DEF = "MoveCylinder";
field34 = browser.currentScene.createNode("field");
field34.name = "spine";
field34.accessType = "inputOutput";
field34.type = "MFVec3f";
field34.value = "0 -50 0 0 0 0 0 50 0";
Script33.field = [];

Script33.field[0] = field34;

field35 = browser.currentScene.createNode("field");
field35.name = "set_endA";
field35.accessType = "inputOnly";
field35.type = "SFVec3f";
Script33.field[1] = field35;

field36 = browser.currentScene.createNode("field");
field36.name = "set_endB";
field36.accessType = "inputOnly";
field36.type = "SFVec3f";
Script33.field[2] = field36;

IS37 = browser.currentScene.createNode("IS");
connect38 = browser.currentScene.createNode("connect");
connect38.nodeField = "set_endA";
connect38.protoField = "positionA";
IS37.connect = [];

IS37.connect[0] = connect38;

connect39 = browser.currentScene.createNode("connect");
connect39.nodeField = "set_endB";
connect39.protoField = "positionB";
IS37.connect[1] = connect39;

Script33.iS = IS37;


Script33.setSourceCode(`ecmascript:\n"+
"\n"+
"                function set_endA(value) {\n"+
"		    if (typeof spine === \"undefined\") {\n"+
"		        spine = new MFVec3f([value, value]);\n"+
"		    } else {\n"+
"		        spine = new MFVec3f([value, spine[1]]);\n"+
"		    }\n"+
"                }\n"+
"\n"+
"                function set_endB(value) {\n"+
"		    if (typeof spine === \"undefined\") {\n"+
"		        spine = new MFVec3f([value, value]);\n"+
"		    } else {\n"+
"		        spine = new MFVec3f([spine[0], value]);\n"+
"		    }\n"+
"                }\n"+
"\n"+
"                function set_spine(value) {\n"+
"		    Browser.print('\\n'+'\"');\n"+
"                    spine = value;\n"+
"                }`)
ProtoBody28.children[1] = Script33;

ROUTE40 = browser.currentScene.createNode("ROUTE");
ROUTE40.fromNode = "MoveCylinder";
ROUTE40.fromField = "spine";
ROUTE40.toNode = "extrusion";
ROUTE40.toField = "set_spine";
ProtoBody28.children[2] = ROUTE40;

ProtoDeclare24.protoBody = ProtoBody28;

browser.currentScene.children[1] = ProtoDeclare24;

Transform41 = browser.currentScene.createNode("Transform");
Transform41.scale = [0.1,0.1,0.1];
ProtoInstance42 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance42.name = "node";
ProtoInstance42.DEF = "nodeA";
fieldValue43 = browser.currentScene.createNode("fieldValue");
fieldValue43.name = "position";
fieldValue43.value = "-50 -50 -50";
ProtoInstance42.fieldValue = [];

ProtoInstance42.fieldValue[0] = fieldValue43;

Transform41.children = [];

Transform41.children[0] = ProtoInstance42;

ProtoInstance44 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance44.name = "node";
ProtoInstance44.DEF = "nodeB";
fieldValue45 = browser.currentScene.createNode("fieldValue");
fieldValue45.name = "position";
fieldValue45.value = "50 50 50";
ProtoInstance44.fieldValue = [];

ProtoInstance44.fieldValue[0] = fieldValue45;

Transform41.children[1] = ProtoInstance44;

ProtoInstance46 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance46.name = "cylinder";
ProtoInstance46.DEF = "linkA";
fieldValue47 = browser.currentScene.createNode("fieldValue");
fieldValue47.name = "positionA";
fieldValue47.value = "0 0 0";
ProtoInstance46.fieldValue = [];

ProtoInstance46.fieldValue[0] = fieldValue47;

fieldValue48 = browser.currentScene.createNode("fieldValue");
fieldValue48.name = "positionB";
fieldValue48.value = "50 50 50";
ProtoInstance46.fieldValue[1] = fieldValue48;

Transform41.children[2] = ProtoInstance46;

browser.currentScene.children[2] = Transform41;

ROUTE49 = browser.currentScene.createNode("ROUTE");
ROUTE49.fromNode = "nodeA";
ROUTE49.fromField = "position";
ROUTE49.toNode = "linkA";
ROUTE49.toField = "positionA";
browser.currentScene.children[3] = ROUTE49;

ROUTE50 = browser.currentScene.createNode("ROUTE");
ROUTE50.fromNode = "nodeB";
ROUTE50.fromField = "position";
ROUTE50.toNode = "linkA";
ROUTE50.toField = "positionB";
browser.currentScene.children[4] = ROUTE50;

