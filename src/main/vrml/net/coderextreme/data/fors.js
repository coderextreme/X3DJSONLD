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
ProtoInterface3.field = new MFNode();

ProtoInterface3.field[0] = field4;

ProtoDeclare2.protoInterface = ProtoInterface3;

ProtoBody5 = browser.currentScene.createNode("ProtoBody");
Transform6 = browser.currentScene.createNode("Transform");
Transform6.DEF = "transform";
IS7 = browser.currentScene.createNode("IS");
connect8 = browser.currentScene.createNode("connect");
connect8.nodeField = "translation";
connect8.protoField = "position";
IS7.connect = new MFNode();

IS7.connect[0] = connect8;

Transform6.iS = IS7;

Shape9 = browser.currentScene.createNode("Shape");
Sphere10 = browser.currentScene.createNode("Sphere");
Shape9.geometry = Sphere10;

Appearance11 = browser.currentScene.createNode("Appearance");
Material12 = browser.currentScene.createNode("Material");
Material12.diffuseColor = new SFColor(new float[1,0,0]);
Appearance11.material = Material12;

Shape9.appearance = Appearance11;

Transform6.children = new MFNode();

Transform6.children[0] = Shape9;

Transform13 = browser.currentScene.createNode("Transform");
Transform13.translation = new SFVec3f(new float[1,0,0]);
Shape14 = browser.currentScene.createNode("Shape");
Text15 = browser.currentScene.createNode("Text");
Text15.string = new MFString(new java.lang.String["Node"]);
FontStyle16 = browser.currentScene.createNode("FontStyle");
FontStyle16.justify = new MFString(new java.lang.String["MIDDLE","MIDDLE"]);
FontStyle16.size = 5;
Text15.fontStyle = FontStyle16;

Shape14.geometry = Text15;

Appearance17 = browser.currentScene.createNode("Appearance");
Material18 = browser.currentScene.createNode("Material");
Material18.diffuseColor = new SFColor(new float[0,0,1]);
Appearance17.material = Material18;

Shape14.appearance = Appearance17;

Transform13.children = new MFNode();

Transform13.children[0] = Shape14;

Transform6.children[1] = Transform13;

ProtoBody5.children = new MFNode();

ProtoBody5.children[0] = Transform6;

PositionInterpolator19 = browser.currentScene.createNode("PositionInterpolator");
PositionInterpolator19.DEF = "NodePosition";
PositionInterpolator19.key = new MFFloat(new float[0,1]);
PositionInterpolator19.keyValue = new MFVec3f(new float[0,0,0,0,5,0]);
ProtoBody5.children[1] = PositionInterpolator19;

Script20 = browser.currentScene.createNode("Script");
Script20.DEF = "MoveBall";
field21 = browser.currentScene.createNode("field");
field21.name = "translation";
field21.accessType = "inputOutput";
field21.type = "SFVec3f";
field21.value = "50 50 0";
Script20.field = new MFNode();

Script20.field[0] = field21;

field22 = browser.currentScene.createNode("field");
field22.name = "old";
field22.accessType = "inputOutput";
field22.type = "SFVec3f";
field22.value = "0 0 0";
Script20.field[1] = field22;

field23 = browser.currentScene.createNode("field");
field23.name = "set_cycle";
field23.accessType = "inputOnly";
field23.type = "SFTime";
Script20.field[2] = field23;

field24 = browser.currentScene.createNode("field");
field24.name = "keyValue";
field24.accessType = "outputOnly";
field24.type = "MFVec3f";
Script20.field[3] = field24;


Script20.setSourceCode(`ecmascript:\n"+
"					function set_cycle(value) {\n"+
"                                                old = translation;\n"+
"						translation = new SFVec3f(Math.random()*100-50, Math.random()*100-50, Math.random()*100-50);\n"+
"                                                keyValue = new MFVec3f([old, translation]);\n"+
"						// Browser.println(translation);\n"+
"					}`)
ProtoBody5.children[2] = Script20;

TimeSensor25 = browser.currentScene.createNode("TimeSensor");
TimeSensor25.DEF = "nodeClock";
TimeSensor25.cycleInterval = 3;
TimeSensor25.loop = True;
ProtoBody5.children[3] = TimeSensor25;

ROUTE26 = browser.currentScene.createNode("ROUTE");
ROUTE26.fromNode = "nodeClock";
ROUTE26.fromField = "cycleTime";
ROUTE26.toNode = "MoveBall";
ROUTE26.toField = "set_cycle";
ProtoBody5.children[4] = ROUTE26;

ROUTE27 = browser.currentScene.createNode("ROUTE");
ROUTE27.fromNode = "nodeClock";
ROUTE27.fromField = "fraction_changed";
ROUTE27.toNode = "NodePosition";
ROUTE27.toField = "set_fraction";
ProtoBody5.children[5] = ROUTE27;

ROUTE28 = browser.currentScene.createNode("ROUTE");
ROUTE28.fromNode = "MoveBall";
ROUTE28.fromField = "keyValue";
ROUTE28.toNode = "NodePosition";
ROUTE28.toField = "keyValue";
ProtoBody5.children[6] = ROUTE28;

ROUTE29 = browser.currentScene.createNode("ROUTE");
ROUTE29.fromNode = "NodePosition";
ROUTE29.fromField = "value_changed";
ROUTE29.toNode = "transform";
ROUTE29.toField = "set_translation";
ProtoBody5.children[7] = ROUTE29;

ProtoDeclare2.protoBody = ProtoBody5;

browser.currentScene.children = new MFNode();

browser.currentScene.children[0] = ProtoDeclare2;

ProtoDeclare30 = browser.currentScene.createNode("ProtoDeclare");
ProtoDeclare30.name = "cylinder";
ProtoInterface31 = browser.currentScene.createNode("ProtoInterface");
field32 = browser.currentScene.createNode("field");
field32.name = "set_positionA";
field32.accessType = "inputOnly";
field32.type = "SFVec3f";
ProtoInterface31.field = new MFNode();

ProtoInterface31.field[0] = field32;

field33 = browser.currentScene.createNode("field");
field33.name = "set_positionB";
field33.accessType = "inputOnly";
field33.type = "SFVec3f";
ProtoInterface31.field[1] = field33;

ProtoDeclare30.protoInterface = ProtoInterface31;

ProtoBody34 = browser.currentScene.createNode("ProtoBody");
Shape35 = browser.currentScene.createNode("Shape");
Extrusion36 = browser.currentScene.createNode("Extrusion");
Extrusion36.DEF = "extrusion";
Extrusion36.creaseAngle = 0.785;
Extrusion36.crossSection = new MFVec2f(new float[1,0,0.92,-0.38,0.71,-0.71,0.38,-0.92,0,-1,-0.38,-0.92,-0.71,-0.71,-0.92,-0.38,-1,0,-0.92,0.38,-0.71,0.71,-0.38,0.92,0,1,0.38,0.92,0.71,0.71,0.92,0.38,1,0]);
Extrusion36.spine = new MFVec3f(new float[0,-50,0,0,50,0]);
Shape35.geometry = Extrusion36;

Appearance37 = browser.currentScene.createNode("Appearance");
Material38 = browser.currentScene.createNode("Material");
Material38.diffuseColor = new SFColor(new float[0,1,0]);
Appearance37.material = Material38;

Shape35.appearance = Appearance37;

ProtoBody34.children = new MFNode();

ProtoBody34.children[0] = Shape35;

Script39 = browser.currentScene.createNode("Script");
Script39.DEF = "MoveCylinder";
field40 = browser.currentScene.createNode("field");
field40.name = "spine";
field40.accessType = "inputOutput";
field40.type = "MFVec3f";
field40.value = "0 -50 0 0 50 0";
Script39.field = new MFNode();

Script39.field[0] = field40;

field41 = browser.currentScene.createNode("field");
field41.name = "set_endA";
field41.accessType = "inputOnly";
field41.type = "SFVec3f";
Script39.field[1] = field41;

field42 = browser.currentScene.createNode("field");
field42.name = "set_endB";
field42.accessType = "inputOnly";
field42.type = "SFVec3f";
Script39.field[2] = field42;

IS43 = browser.currentScene.createNode("IS");
connect44 = browser.currentScene.createNode("connect");
connect44.nodeField = "set_endA";
connect44.protoField = "set_positionA";
IS43.connect = new MFNode();

IS43.connect[0] = connect44;

connect45 = browser.currentScene.createNode("connect");
connect45.nodeField = "set_endB";
connect45.protoField = "set_positionB";
IS43.connect[1] = connect45;

Script39.iS = IS43;


Script39.setSourceCode(`ecmascript:\n"+
"\n"+
"                function set_endA(value) {\n"+
"		    if (typeof spine === 'undefined') {\n"+
"		        spine = new MFVec3f([value, value]);\n"+
"		    } else {\n"+
"		        spine = new MFVec3f([value, spine[1]]);\n"+
"		    }\n"+
"                }\n"+
"\n"+
"                function set_endB(value) {\n"+
"		    if (typeof spine === 'undefined') {\n"+
"		        spine = new MFVec3f([value, value]);\n"+
"		    } else {\n"+
"		        spine = new MFVec3f([spine[0], value]);\n"+
"		    }\n"+
"                }\n"+
"\n"+
"                function set_spine(value) {\n"+
"                    spine = value;\n"+
"                }`)
ProtoBody34.children[1] = Script39;

ROUTE46 = browser.currentScene.createNode("ROUTE");
ROUTE46.fromNode = "MoveCylinder";
ROUTE46.fromField = "spine";
ROUTE46.toNode = "extrusion";
ROUTE46.toField = "set_spine";
ProtoBody34.children[2] = ROUTE46;

ProtoDeclare30.protoBody = ProtoBody34;

browser.currentScene.children[1] = ProtoDeclare30;

Transform47 = browser.currentScene.createNode("Transform");
Transform47.DEF = "HoldsContent";
Transform47.scale = new SFVec3f(new float[0.1,0.1,0.1]);
PlaneSensor48 = browser.currentScene.createNode("PlaneSensor");
PlaneSensor48.DEF = "clickGenerator";
PlaneSensor48.minPosition = new SFVec2f(new float[-50,-50]);
PlaneSensor48.maxPosition = new SFVec2f(new float[50,50]);
PlaneSensor48.description = "click on background to add nodes, click on nodes to add links";
Transform47.children = new MFNode();

Transform47.children[0] = PlaneSensor48;

ProtoInstance49 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance49.name = "node";
ProtoInstance49.DEF = "nodeA";
fieldValue50 = browser.currentScene.createNode("fieldValue");
fieldValue50.name = "position";
fieldValue50.value = "0 0 0";
ProtoInstance49.fieldValue = new MFNode();

ProtoInstance49.fieldValue[0] = fieldValue50;

Transform47.children[1] = ProtoInstance49;

ProtoInstance51 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance51.name = "node";
ProtoInstance51.DEF = "nodeB";
fieldValue52 = browser.currentScene.createNode("fieldValue");
fieldValue52.name = "position";
fieldValue52.value = "50 50 50";
ProtoInstance51.fieldValue = new MFNode();

ProtoInstance51.fieldValue[0] = fieldValue52;

Transform47.children[2] = ProtoInstance51;

ProtoInstance53 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance53.name = "cylinder";
ProtoInstance53.DEF = "linkA";
fieldValue54 = browser.currentScene.createNode("fieldValue");
fieldValue54.name = "set_positionA";
fieldValue54.value = "0 0 0";
ProtoInstance53.fieldValue = new MFNode();

ProtoInstance53.fieldValue[0] = fieldValue54;

fieldValue55 = browser.currentScene.createNode("fieldValue");
fieldValue55.name = "set_positionB";
fieldValue55.value = "50 50 50";
ProtoInstance53.fieldValue[1] = fieldValue55;

Transform47.children[3] = ProtoInstance53;

browser.currentScene.children[2] = Transform47;

ROUTE56 = browser.currentScene.createNode("ROUTE");
ROUTE56.fromNode = "nodeA";
ROUTE56.fromField = "position";
ROUTE56.toNode = "linkA";
ROUTE56.toField = "set_positionA";
browser.currentScene.children[3] = ROUTE56;

ROUTE57 = browser.currentScene.createNode("ROUTE");
ROUTE57.fromNode = "nodeB";
ROUTE57.fromField = "position";
ROUTE57.toNode = "linkA";
ROUTE57.toField = "set_positionB";
browser.currentScene.children[4] = ROUTE57;

