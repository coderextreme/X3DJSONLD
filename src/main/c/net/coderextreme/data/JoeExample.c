#include "C:/x3d-code/www.web3d.org/x3d/languages/c/Concretes.h"
void main(int argc, char ** argv) {
Browser browser = X3D.getBrowser();
X3D X3D0;
X3D0.version = "3.0";
X3D0.profile = "Immersive";
head head1 = createNode("head");
meta meta2 = createNode("meta");
meta2.name = "title";
meta2.content = "Scripting.x3d";
head1.meta = new MFNode();

head1.meta[0] = meta2;

head = head1;

Script Script4 = createNode("Script");
Script4.DEF = "OpenVault";
field field5 = createNode("field");
field5.name = "openVault";
field5.type = "SFTime";
field5.accessType = "inputOnly";
Script4.field = new MFNode();

Script4.field[0] = field5;

field field6 = createNode("field");
field6.name = "combinationEntered";
field6.type = "SFBool";
field6.accessType = "inputOnly";
Script4.field[1] = field6;

field field7 = createNode("field");
field7.name = "vaultUnlocked";
field7.type = "SFTime";
field7.accessType = "outputOnly";
Script4.field[2] = field7;

field field8 = createNode("field");
field8.name = "unlocked";
field8.type = "SFBool";
field8.value = "false";
field8.accessType = "initializeOnly";
Script4.field[3] = field8;


Script4.setSourceCode(`ecmascript:\n"+
"\n"+
"      function combinationEntered (value) {\n"+
"\n"+
"        unlocked = value;\n"+
"\n"+
"      }\n"+
"\n"+
"      function openVault(value) {\n"+
"\n"+
"      if (unlocked) vaultUnlocked = value;\n"+
"\n"+
"      }`)
children = new MFNode();

children[0] = Script4;

Shape Shape9 = createNode("Shape");
Appearance Appearance10 = createNode("Appearance");
Material Material11 = createNode("Material");
Material11.diffuseColor = new SFColor(new float[1,0,0]);
Appearance10.material = Material11;

Shape9.appearance = Appearance10;

Sphere Sphere12 = createNode("Sphere");
Shape9.geometry = Sphere12;

children[1] = Shape9;

Sound Sound13 = createNode("Sound");
Sound13.maxBack = 1000;
Sound13.maxFront = 1000;
Sound13.minBack = 1000;
Sound13.minFront = 1000;
AudioClip AudioClip14 = createNode("AudioClip");
AudioClip14.DEF = "Click";
AudioClip14.stopTime = 1;
AudioClip14.description = "clicking sound";
AudioClip14.url = new MFString(new java.lang.String["../resources/chandubabamusic1.wav"]);
Sound13.source = AudioClip14;

children[2] = Sound13;

TouchSensor TouchSensor15 = createNode("TouchSensor");
TouchSensor15.DEF = "TS";
children[3] = TouchSensor15;

ROUTE ROUTE16 = createNode("ROUTE");
ROUTE16.fromNode = "TS";
ROUTE16.fromField = "isOver";
ROUTE16.toNode = "OpenVault";
ROUTE16.toField = "combinationEntered";
children[4] = ROUTE16;

ROUTE ROUTE17 = createNode("ROUTE");
ROUTE17.fromNode = "TS";
ROUTE17.fromField = "touchTime";
ROUTE17.toNode = "OpenVault";
ROUTE17.toField = "openVault";
children[5] = ROUTE17;

ROUTE ROUTE18 = createNode("ROUTE");
ROUTE18.fromNode = "OpenVault";
ROUTE18.fromField = "vaultUnlocked";
ROUTE18.toNode = "Click";
ROUTE18.toField = "startTime";
children[6] = ROUTE18;

}
