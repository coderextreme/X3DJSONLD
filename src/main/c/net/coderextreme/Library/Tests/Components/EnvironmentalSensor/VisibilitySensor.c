#include "C:/x3d-code/www.web3d.org/x3d/languages/c/Concretes.h"
void main(int argc, char ** argv) {
Browser browser = X3D.getBrowser();
X3D X3D0;
X3D0.profile = "Full";
X3D0.version = "3.3";
head head1 = createNode("head");
meta meta2 = createNode("meta");
meta2.name = "comment";
meta2.content = "World of Titania";
head1.meta = new MFNode();

head1.meta[0] = meta2;

meta meta3 = createNode("meta");
meta3.name = "created";
meta3.content = "Fri, 18 Sep 2015 12:58:36 GMT";
head1.meta[1] = meta3;

meta meta4 = createNode("meta");
meta4.name = "creator";
meta4.content = "Holger Seelig";
head1.meta[2] = meta4;

meta meta5 = createNode("meta");
meta5.name = "generator";
meta5.content = "Titania V1.1.0, http://titania.create3000.de";
head1.meta[3] = meta5;

meta meta6 = createNode("meta");
meta6.name = "modified";
meta6.content = "Fri, 18 Sep 2015 13:41:42 GMT";
head1.meta[4] = meta6;

meta meta7 = createNode("meta");
meta7.name = "title";
meta7.content = "VisibilitySensor";
head1.meta[5] = meta7;

head = head1;

Background Background9 = createNode("Background");
Background9.skyColor = new MFColor(new float[1,1,1]);
children = new MFNode();

children[0] = Background9;

Viewpoint Viewpoint10 = createNode("Viewpoint");
children[1] = Viewpoint10;

Switch Switch11 = createNode("Switch");
Switch11.DEF = "_1";
Switch11.whichChoice = 0;
Group Group12 = createNode("Group");
Transform Transform13 = createNode("Transform");
Transform13.DEF = "_2";
Transform13.scale = new SFVec3f(new float[2.82961,0.74589,1]);
Shape Shape14 = createNode("Shape");
Appearance Appearance15 = createNode("Appearance");
Material Material16 = createNode("Material");
Material16.diffuseColor = new SFColor(new float[1,0,0]);
Material16.transparency = 0.5;
Appearance15.material = Material16;

Shape14.appearance = Appearance15;

Box Box17 = createNode("Box");
Box17.size = new SFVec3f(new float[1,1,1]);
Box17.solid = False;
Shape14.geometry = Box17;

Transform13.child = new undefined();

Transform13.child[0] = Shape14;

Group12.children = new MFNode();

Group12.children[0] = Transform13;

VisibilitySensor VisibilitySensor18 = createNode("VisibilitySensor");
VisibilitySensor18.DEF = "Sensor";
VisibilitySensor18.size = new SFVec3f(new float[2.82961,0.74589,1]);
Group12.children[1] = VisibilitySensor18;

Switch11.children = new MFNode();

Switch11.children[0] = Group12;

children[2] = Switch11;

Script Script19 = createNode("Script");
Script19.DEF = "Debug";
field field20 = createNode("field");
field20.name = "set_enabled";
field20.accessType = "inputOnly";
field20.type = "SFTime";
Script19.field = new MFNode();

Script19.field[0] = field20;

field field21 = createNode("field");
field21.name = "set_whichChoice";
field21.accessType = "inputOnly";
field21.type = "SFTime";
Script19.field[1] = field21;

field field22 = createNode("field");
field22.name = "isActive";
field22.accessType = "inputOnly";
field22.type = "SFBool";
Script19.field[2] = field22;

field field23 = createNode("field");
field23.name = "enterTime";
field23.accessType = "inputOnly";
field23.type = "SFTime";
Script19.field[3] = field23;

field field24 = createNode("field");
field24.name = "exitTime";
field24.accessType = "inputOnly";
field24.type = "SFTime";
Script19.field[4] = field24;

field field25 = createNode("field");
field25.name = "sensor";
field25.accessType = "initializeOnly";
field25.type = "SFNode";
VisibilitySensor VisibilitySensor26 = createNode("VisibilitySensor");
VisibilitySensor26.USE = "Sensor";
field25.children = new MFNode();

field25.children[0] = VisibilitySensor26;

Script19.field[5] = field25;

field field27 = createNode("field");
field27.name = "switchNode";
field27.accessType = "initializeOnly";
field27.type = "SFNode";
Switch Switch28 = createNode("Switch");
Switch28.USE = "_1";
field27.children = new MFNode();

field27.children[0] = Switch28;

Script19.field[6] = field27;


Script19.setSourceCode(`javascript:\n"+
"function set_enabled (value, time)\n"+
"{\n"+
"	sensor .enabled = ! sensor .enabled;\n"+
"	print ('enabled ' + sensor .enabled);\n"+
"}\n"+
"function set_whichChoice (value, time)\n"+
"{\n"+
"	switchNode .whichChoice = ! switchNode .whichChoice;\n"+
"	print ('whichChoice ' + switchNode .whichChoice);\n"+
"}\n"+
"function isActive (value, time)\n"+
"{\n"+
"	print ('isActive ' + value);\n"+
"}\n"+
"function enterTime (value, time)\n"+
"{\n"+
"	print ('enterTime ' + value);\n"+
"}\n"+
"function exitTime (value, time)\n"+
"{\n"+
"	print ('exitTime ' + value);\n"+
"}`)
children[3] = Script19;

Transform Transform29 = createNode("Transform");
Transform29.DEF = "Text_1";
Transform29.translation = new SFVec3f(new float[-2.61579,1.3267,0]);
Shape Shape30 = createNode("Shape");
Appearance Appearance31 = createNode("Appearance");
Material Material32 = createNode("Material");
Material32.DEF = "Tropical15_1";
Material32.ambientIntensity = 0.223992;
Material32.diffuseColor = new SFColor(new float[0.895967,0,0.691271]);
Material32.specularColor = new SFColor(new float[0.0955906,0.0862563,0.093458]);
Material32.shininess = 0.078125;
Appearance31.material = Material32;

Shape30.appearance = Appearance31;

Text Text33 = createNode("Text");
Text33.string = new MFString(new java.lang.String["Enabled"]);
Text33.solid = True;
FontStyle FontStyle34 = createNode("FontStyle");
FontStyle34.justify = new MFString(new java.lang.String["MIDDLE"]);
Text33.fontStyle = FontStyle34;

Shape30.geometry = Text33;

Transform29.child = new undefined();

Transform29.child[0] = Shape30;

Transform Transform35 = createNode("Transform");
Transform35.DEF = "Box_1";
Transform35.translation = new SFVec3f(new float[-0.0107825,0.240168,0]);
Transform35.scale = new SFVec3f(new float[1.74811,0.513384,0.165402]);
Shape Shape36 = createNode("Shape");
Appearance Appearance37 = createNode("Appearance");
Material Material38 = createNode("Material");
Material38.transparency = 0.640823;
Appearance37.material = Material38;

Shape36.appearance = Appearance37;

Box Box39 = createNode("Box");
Shape36.geometry = Box39;

Transform35.child = new undefined();

Transform35.child[0] = Shape36;

Transform29.children[1] = Transform35;

TouchSensor TouchSensor40 = createNode("TouchSensor");
TouchSensor40.DEF = "_3";
Transform29.children[2] = TouchSensor40;

children[4] = Transform29;

Transform Transform41 = createNode("Transform");
Transform41.DEF = "Text";
Transform41.translation = new SFVec3f(new float[3.38007,1.3267,0]);
Shape Shape42 = createNode("Shape");
Appearance Appearance43 = createNode("Appearance");
Material Material44 = createNode("Material");
Material44.DEF = "Tropical3_1";
Material44.ambientIntensity = 0.226102;
Material44.diffuseColor = new SFColor(new float[0.904409,0.774741,0.0830671]);
Material44.specularColor = new SFColor(new float[0.0955906,0.0955906,0.0955906]);
Material44.shininess = 0.078125;
Appearance43.material = Material44;

Shape42.appearance = Appearance43;

Text Text45 = createNode("Text");
Text45.string = new MFString(new java.lang.String["Switch"]);
Text45.solid = True;
FontStyle FontStyle46 = createNode("FontStyle");
FontStyle46.justify = new MFString(new java.lang.String["MIDDLE"]);
Text45.fontStyle = FontStyle46;

Shape42.geometry = Text45;

Transform41.child = new undefined();

Transform41.child[0] = Shape42;

Transform Transform47 = createNode("Transform");
Transform47.DEF = "Box_2";
Transform47.translation = new SFVec3f(new float[-0.0486381,0.213912,0]);
Transform47.scale = new SFVec3f(new float[1.70972,0.513384,0.165402]);
Shape Shape48 = createNode("Shape");
Appearance Appearance49 = createNode("Appearance");
Material Material50 = createNode("Material");
Material50.transparency = 0.640823;
Appearance49.material = Material50;

Shape48.appearance = Appearance49;

Box Box51 = createNode("Box");
Shape48.geometry = Box51;

Transform47.child = new undefined();

Transform47.child[0] = Shape48;

Transform41.children[1] = Transform47;

TouchSensor TouchSensor52 = createNode("TouchSensor");
TouchSensor52.DEF = "_4";
Transform41.children[2] = TouchSensor52;

children[5] = Transform41;

ROUTE ROUTE53 = createNode("ROUTE");
ROUTE53.fromNode = "Sensor";
ROUTE53.fromField = "enterTime";
ROUTE53.toNode = "Debug";
ROUTE53.toField = "enterTime";
children[6] = ROUTE53;

ROUTE ROUTE54 = createNode("ROUTE");
ROUTE54.fromNode = "Sensor";
ROUTE54.fromField = "exitTime";
ROUTE54.toNode = "Debug";
ROUTE54.toField = "exitTime";
children[7] = ROUTE54;

ROUTE ROUTE55 = createNode("ROUTE");
ROUTE55.fromNode = "Sensor";
ROUTE55.fromField = "isActive";
ROUTE55.toNode = "Debug";
ROUTE55.toField = "isActive";
children[8] = ROUTE55;

ROUTE ROUTE56 = createNode("ROUTE");
ROUTE56.fromNode = "_3";
ROUTE56.fromField = "touchTime";
ROUTE56.toNode = "Debug";
ROUTE56.toField = "set_enabled";
children[9] = ROUTE56;

ROUTE ROUTE57 = createNode("ROUTE");
ROUTE57.fromNode = "_4";
ROUTE57.fromField = "touchTime";
ROUTE57.toNode = "Debug";
ROUTE57.toField = "set_whichChoice";
children[10] = ROUTE57;

ROUTE ROUTE58 = createNode("ROUTE");
ROUTE58.fromNode = "_2";
ROUTE58.fromField = "scale_changed";
ROUTE58.toNode = "Sensor";
ROUTE58.toField = "set_size";
children[11] = ROUTE58;

}
