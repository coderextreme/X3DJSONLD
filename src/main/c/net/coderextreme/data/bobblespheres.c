#include "C:/x3d-code/www.web3d.org/x3d/languages/c/Concretes.h"
void main(int argc, char ** argv) {
Browser browser = X3D.getBrowser();
X3D X3D0;
X3D0.profile = "Immersive";
X3D0.version = "4.0";
head head1 = createNode("head");
component component2 = createNode("component");
component2.name = "X_ITE";
component2.level = 1;
head1.component = new MFNode();

head1.component[0] = component2;

meta meta3 = createNode("meta");
meta3.name = "title";
meta3.content = "Bobble Spheres Full Animation (Final Working)";
head1.meta[1] = meta3;

meta meta4 = createNode("meta");
meta4.name = "description";
meta4.content = "Full scene with corrected Script nodes that use the initialize() function to safely reference nodes and prevent race conditions.";
head1.meta[2] = meta4;

meta meta5 = createNode("meta");
meta5.name = "creator";
meta5.content = "Generated from Python script";
head1.meta[3] = meta5;

head = head1;

WorldInfo WorldInfo7 = createNode("WorldInfo");
WorldInfo7.title = "Bobble Spheres (PBR Full Animation)";
children = new MFNode();

children[0] = WorldInfo7;

NavigationInfo NavigationInfo8 = createNode("NavigationInfo");
children[1] = NavigationInfo8;

Background Background9 = createNode("Background");
Background9.skyAngle = new MFFloat(new float[1.57]);
Background9.skyColor = new MFColor(new float[0.15,0.25,0.8,0.9,0.9,0.9]);
children[2] = Background9;

Viewpoint Viewpoint10 = createNode("Viewpoint");
Viewpoint10.description = "Initial Camera";
Viewpoint10.position = new SFVec3f(new float[-70,15,-25]);
Viewpoint10.orientation = new SFRotation(new float[0.147,0.989,0.005,-1.82]);
Viewpoint10.fieldOfView = 0.349;
children[3] = Viewpoint10;

DirectionalLight DirectionalLight11 = createNode("DirectionalLight");
DirectionalLight11.direction = new SFVec3f(new float[-0.5,-1,-0.5]);
DirectionalLight11.intensity = 2;
children[4] = DirectionalLight11;

//Static objects
Transform Transform12 = createNode("Transform");
Transform12.translation = new SFVec3f(new float[0,-1000,-1]);
Shape Shape13 = createNode("Shape");
Appearance Appearance14 = createNode("Appearance");
PhysicalMaterial PhysicalMaterial15 = createNode("PhysicalMaterial");
PhysicalMaterial15.baseColor = new SFColor(new float[0.5,0.5,0.5]);
Appearance14.material = PhysicalMaterial15;

Shape13.appearance = Appearance14;

Sphere Sphere16 = createNode("Sphere");
Sphere16.radius = 1000;
Shape13.geometry = Sphere16;

Transform12.child = new undefined();

Transform12.child[0] = Shape13;

children[5] = Transform12;

Transform Transform17 = createNode("Transform");
Transform17.translation = new SFVec3f(new float[0,1,0]);
Shape Shape18 = createNode("Shape");
Appearance Appearance19 = createNode("Appearance");
PhysicalMaterial PhysicalMaterial20 = createNode("PhysicalMaterial");
PhysicalMaterial20.baseColor = new SFColor(new float[0.9,0.9,0.9]);
PhysicalMaterial20.transmissionFactor = "0.9";
PhysicalMaterial20.roughness = 0;
PhysicalMaterial20.indexOfRefraction = "1.5";
Appearance19.material = PhysicalMaterial20;

Shape18.appearance = Appearance19;

Sphere Sphere21 = createNode("Sphere");
Shape18.geometry = Sphere21;

Transform17.child = new undefined();

Transform17.child[0] = Shape18;

children[6] = Transform17;

Transform Transform22 = createNode("Transform");
Transform22.translation = new SFVec3f(new float[-4,1,0]);
Shape Shape23 = createNode("Shape");
Appearance Appearance24 = createNode("Appearance");
PhysicalMaterial PhysicalMaterial25 = createNode("PhysicalMaterial");
PhysicalMaterial25.baseColor = new SFColor(new float[1,0.95,0.9]);
PhysicalMaterial25.transmissionFactor = "0.8";
PhysicalMaterial25.roughness = 0.05;
PhysicalMaterial25.indexOfRefraction = "1.1";
Appearance24.material = PhysicalMaterial25;

Shape23.appearance = Appearance24;

Sphere Sphere26 = createNode("Sphere");
Shape23.geometry = Sphere26;

Transform22.child = new undefined();

Transform22.child[0] = Shape23;

children[7] = Transform22;

Transform Transform27 = createNode("Transform");
Transform27.translation = new SFVec3f(new float[4,1,0]);
Shape Shape28 = createNode("Shape");
Appearance Appearance29 = createNode("Appearance");
PhysicalMaterial PhysicalMaterial30 = createNode("PhysicalMaterial");
PhysicalMaterial30.baseColor = new SFColor(new float[0.7,0.6,0.5]);
PhysicalMaterial30.roughness = 0.1;
Appearance29.material = PhysicalMaterial30;

Shape28.appearance = Appearance29;

Sphere Sphere31 = createNode("Sphere");
Shape28.geometry = Sphere31;

Transform27.child = new undefined();

Transform27.child[0] = Shape28;

children[8] = Transform27;

//=== DYNAMICALLY GENERATED SPHERES ===
//Example: Matte Sphere with animated color and roughness (Using initialize())
Transform Transform32 = createNode("Transform");
Transform32.DEF = "T_0";
Transform32.translation = new SFVec3f(new float[-10.871,0.2,-10.453]);
Shape Shape33 = createNode("Shape");
Appearance Appearance34 = createNode("Appearance");
PhysicalMaterial PhysicalMaterial35 = createNode("PhysicalMaterial");
PhysicalMaterial35.DEF = "M_0";
PhysicalMaterial35.baseColor = new SFColor(new float[0.627,0.003,0.165]);
Appearance34.material = PhysicalMaterial35;

Shape33.appearance = Appearance34;

Sphere Sphere36 = createNode("Sphere");
Sphere36.radius = 0.2;
Shape33.geometry = Sphere36;

Transform32.child = new undefined();

Transform32.child[0] = Shape33;

children[9] = Transform32;

TimeSensor TimeSensor37 = createNode("TimeSensor");
TimeSensor37.DEF = "C_0";
TimeSensor37.cycleInterval = 5.21;
TimeSensor37.loop = True;
children[10] = TimeSensor37;

PositionInterpolator PositionInterpolator38 = createNode("PositionInterpolator");
PositionInterpolator38.DEF = "PI_0";
PositionInterpolator38.key = new MFFloat(new float[0,0.5,1]);
PositionInterpolator38.keyValue = new MFVec3f(new float[-10.871,0.2,-10.453,-10.871,0.6,-10.453,-10.871,0.2,-10.453]);
children[11] = PositionInterpolator38;

ColorInterpolator ColorInterpolator39 = createNode("ColorInterpolator");
ColorInterpolator39.DEF = "CI_0";
ColorInterpolator39.key = new MFFloat(new float[0,0.5,1]);
ColorInterpolator39.keyValue = new MFColor(new float[0.627,0.003,0.165,0.011,0.583,0.443,0.627,0.003,0.165]);
children[12] = ColorInterpolator39;

ScalarInterpolator ScalarInterpolator40 = createNode("ScalarInterpolator");
ScalarInterpolator40.DEF = "SI_0";
ScalarInterpolator40.key = new MFFloat(new float[0,0.5,1]);
ScalarInterpolator40.keyValue = new MFFloat(new float[1,0.4,1]);
children[13] = ScalarInterpolator40;

Script Script41 = createNode("Script");
Script41.DEF = "Animator_0";
field field42 = createNode("field");
field42.name = "set_color";
field42.type = "SFColor";
field42.accessType = "inputOnly";
Script41.field = new MFNode();

Script41.field[0] = field42;

field field43 = createNode("field");
field43.name = "set_roughness";
field43.type = "SFFloat";
field43.accessType = "inputOnly";
Script41.field[1] = field43;

field field44 = createNode("field");
field44.name = "targetMaterial";
field44.type = "SFNode";
field44.accessType = "initializeOnly";
PhysicalMaterial PhysicalMaterial45 = createNode("PhysicalMaterial");
PhysicalMaterial45.USE = "M_0";
field44.children = new MFNode();

field44.children[0] = PhysicalMaterial45;

Script41.field[2] = field44;


Script41.setSourceCode(`ecmascript:\n"+
"        var matNode = null; // Variable to hold the material node reference\n"+
"\n"+
"        function initialize() {\n"+
"          // This function runs AFTER the targetMaterial field is connected.\n"+
"          // We safely store the reference to the actual material node.\n"+
"          matNode = targetMaterial.value;\n"+
"        }\n"+
"\n"+
"        function set_color(value, timestamp) {\n"+
"          if (matNode) { // Check if the node reference was stored\n"+
"            matNode.baseColor = value;\n"+
"          }\n"+
"        }\n"+
"        function set_roughness(value, timestamp) {\n"+
"          if (matNode) {\n"+
"            matNode.roughness = value;\n"+
"          }\n"+
"        }`)
children[14] = Script41;

ROUTE ROUTE46 = createNode("ROUTE");
ROUTE46.fromNode = "C_0";
ROUTE46.fromField = "fraction_changed";
ROUTE46.toNode = "PI_0";
ROUTE46.toField = "set_fraction";
children[15] = ROUTE46;

ROUTE ROUTE47 = createNode("ROUTE");
ROUTE47.fromNode = "PI_0";
ROUTE47.fromField = "value_changed";
ROUTE47.toNode = "T_0";
ROUTE47.toField = "set_translation";
children[16] = ROUTE47;

ROUTE ROUTE48 = createNode("ROUTE");
ROUTE48.fromNode = "C_0";
ROUTE48.fromField = "fraction_changed";
ROUTE48.toNode = "CI_0";
ROUTE48.toField = "set_fraction";
children[17] = ROUTE48;

ROUTE ROUTE49 = createNode("ROUTE");
ROUTE49.fromNode = "CI_0";
ROUTE49.fromField = "value_changed";
ROUTE49.toNode = "Animator_0";
ROUTE49.toField = "set_color";
children[18] = ROUTE49;

ROUTE ROUTE50 = createNode("ROUTE");
ROUTE50.fromNode = "C_0";
ROUTE50.fromField = "fraction_changed";
ROUTE50.toNode = "SI_0";
ROUTE50.toField = "set_fraction";
children[19] = ROUTE50;

ROUTE ROUTE51 = createNode("ROUTE");
ROUTE51.fromNode = "SI_0";
ROUTE51.fromField = "value_changed";
ROUTE51.toNode = "Animator_0";
ROUTE51.toField = "set_roughness";
children[20] = ROUTE51;

//Example: Metal Sphere with animated roughness (Using initialize())
Transform Transform52 = createNode("Transform");
Transform52.DEF = "T_1";
Transform52.translation = new SFVec3f(new float[-10.411,0.2,-9.16]);
Shape Shape53 = createNode("Shape");
Appearance Appearance54 = createNode("Appearance");
PhysicalMaterial PhysicalMaterial55 = createNode("PhysicalMaterial");
PhysicalMaterial55.DEF = "M_1";
PhysicalMaterial55.baseColor = new SFColor(new float[0.707,0.888,0.536]);
PhysicalMaterial55.roughness = 0.2;
Appearance54.material = PhysicalMaterial55;

Shape53.appearance = Appearance54;

Sphere Sphere56 = createNode("Sphere");
Sphere56.radius = 0.2;
Shape53.geometry = Sphere56;

Transform52.child = new undefined();

Transform52.child[0] = Shape53;

children[21] = Transform52;

TimeSensor TimeSensor57 = createNode("TimeSensor");
TimeSensor57.DEF = "C_1";
TimeSensor57.cycleInterval = 4.15;
TimeSensor57.loop = True;
children[22] = TimeSensor57;

PositionInterpolator PositionInterpolator58 = createNode("PositionInterpolator");
PositionInterpolator58.DEF = "PI_1";
PositionInterpolator58.key = new MFFloat(new float[0,0.5,1]);
PositionInterpolator58.keyValue = new MFVec3f(new float[-10.411,0.2,-9.16,-10.411,0.6,-9.16,-10.411,0.2,-9.16]);
children[23] = PositionInterpolator58;

ScalarInterpolator ScalarInterpolator59 = createNode("ScalarInterpolator");
ScalarInterpolator59.DEF = "SI_1";
ScalarInterpolator59.key = new MFFloat(new float[0,0.5,1]);
ScalarInterpolator59.keyValue = new MFFloat(new float[0.5,0,0.5]);
children[24] = ScalarInterpolator59;

Script Script60 = createNode("Script");
Script60.DEF = "Animator_1";
field field61 = createNode("field");
field61.name = "set_roughness";
field61.type = "SFFloat";
field61.accessType = "inputOnly";
Script60.field = new MFNode();

Script60.field[0] = field61;

field field62 = createNode("field");
field62.name = "targetMaterial";
field62.type = "SFNode";
field62.accessType = "initializeOnly";
PhysicalMaterial PhysicalMaterial63 = createNode("PhysicalMaterial");
PhysicalMaterial63.USE = "M_1";
field62.children = new MFNode();

field62.children[0] = PhysicalMaterial63;

Script60.field[1] = field62;


Script60.setSourceCode(`ecmascript:\n"+
"        var matNode = null;\n"+
"\n"+
"        function initialize() {\n"+
"          matNode = targetMaterial.value;\n"+
"        }\n"+
"\n"+
"        function set_roughness(value, timestamp) {\n"+
"          if (matNode) {\n"+
"            matNode.roughness = value;\n"+
"          }\n"+
"        }`)
children[25] = Script60;

ROUTE ROUTE64 = createNode("ROUTE");
ROUTE64.fromNode = "C_1";
ROUTE64.fromField = "fraction_changed";
ROUTE64.toNode = "PI_1";
ROUTE64.toField = "set_fraction";
children[26] = ROUTE64;

ROUTE ROUTE65 = createNode("ROUTE");
ROUTE65.fromNode = "PI_1";
ROUTE65.fromField = "value_changed";
ROUTE65.toNode = "T_1";
ROUTE65.toField = "set_translation";
children[27] = ROUTE65;

ROUTE ROUTE66 = createNode("ROUTE");
ROUTE66.fromNode = "C_1";
ROUTE66.fromField = "fraction_changed";
ROUTE66.toNode = "SI_1";
ROUTE66.toField = "set_fraction";
children[28] = ROUTE66;

ROUTE ROUTE67 = createNode("ROUTE");
ROUTE67.fromNode = "SI_1";
ROUTE67.fromField = "value_changed";
ROUTE67.toNode = "Animator_1";
ROUTE67.toField = "set_roughness";
children[29] = ROUTE67;

//The extension-based spheres were already correct and need no changes
Transform Transform68 = createNode("Transform");
Transform68.DEF = "T_2";
Transform68.translation = new SFVec3f(new float[-10.155,0.2,-8.324]);
Shape Shape69 = createNode("Shape");
Appearance Appearance70 = createNode("Appearance");
PhysicalMaterial PhysicalMaterial71 = createNode("PhysicalMaterial");
PhysicalMaterial71.transmissionFactor = "0.95";
PhysicalMaterial71.roughness = 0.05;
IORMaterialExtension IORMaterialExtension72 = createNode("IORMaterialExtension");
IORMaterialExtension72.DEF = "IOR_2";
IORMaterialExtension72.indexOfRefraction = "1.5";
PhysicalMaterial71.iORMaterialExtension = IORMaterialExtension72;

Appearance70.material = PhysicalMaterial71;

Shape69.appearance = Appearance70;

Sphere Sphere73 = createNode("Sphere");
Sphere73.radius = 0.2;
Shape69.geometry = Sphere73;

Transform68.child = new undefined();

Transform68.child[0] = Shape69;

children[30] = Transform68;

TimeSensor TimeSensor74 = createNode("TimeSensor");
TimeSensor74.DEF = "C_2";
TimeSensor74.cycleInterval = 3.88;
TimeSensor74.loop = True;
children[31] = TimeSensor74;

PositionInterpolator PositionInterpolator75 = createNode("PositionInterpolator");
PositionInterpolator75.DEF = "PI_2";
PositionInterpolator75.key = new MFFloat(new float[0,0.5,1]);
PositionInterpolator75.keyValue = new MFVec3f(new float[-10.155,0.2,-8.324,-10.155,0.6,-8.324,-10.155,0.2,-8.324]);
children[32] = PositionInterpolator75;

ScalarInterpolator ScalarInterpolator76 = createNode("ScalarInterpolator");
ScalarInterpolator76.DEF = "SI_2";
ScalarInterpolator76.key = new MFFloat(new float[0,0.5,1]);
ScalarInterpolator76.keyValue = new MFFloat(new float[1.4,1.7,1.4]);
children[33] = ScalarInterpolator76;

ROUTE ROUTE77 = createNode("ROUTE");
ROUTE77.fromNode = "C_2";
ROUTE77.fromField = "fraction_changed";
ROUTE77.toNode = "PI_2";
ROUTE77.toField = "set_fraction";
children[34] = ROUTE77;

ROUTE ROUTE78 = createNode("ROUTE");
ROUTE78.fromNode = "PI_2";
ROUTE78.fromField = "value_changed";
ROUTE78.toNode = "T_2";
ROUTE78.toField = "set_translation";
children[35] = ROUTE78;

ROUTE ROUTE79 = createNode("ROUTE");
ROUTE79.fromNode = "C_2";
ROUTE79.fromField = "fraction_changed";
ROUTE79.toNode = "SI_2";
ROUTE79.toField = "set_fraction";
children[36] = ROUTE79;

ROUTE ROUTE80 = createNode("ROUTE");
ROUTE80.fromNode = "SI_2";
ROUTE80.fromField = "value_changed";
ROUTE80.toNode = "IOR_2";
ROUTE80.toField = "set_indexOfRefraction";
children[37] = ROUTE80;

Transform Transform81 = createNode("Transform");
Transform81.DEF = "T_3";
Transform81.translation = new SFVec3f(new float[-10.518,0.2,-7.283]);
Shape Shape82 = createNode("Shape");
Appearance Appearance83 = createNode("Appearance");
PhysicalMaterial PhysicalMaterial84 = createNode("PhysicalMaterial");
PhysicalMaterial84.transmissionFactor = "0.95";
PhysicalMaterial84.roughness = 0.05;
PhysicalMaterial84.indexOfRefraction = "1.33";
IridescenceMaterialExtension IridescenceMaterialExtension85 = createNode("IridescenceMaterialExtension");
IridescenceMaterialExtension85.DEF = "IRI_3";
IridescenceMaterialExtension85.iridescence = "1";
IridescenceMaterialExtension85.iridescenceIndexOfRefraction = "1.3";
IridescenceMaterialExtension85.iridescenceThicknessMinimum = "100";
PhysicalMaterial84.iridescenceMaterialExtension = IridescenceMaterialExtension85;

Appearance83.material = PhysicalMaterial84;

Shape82.appearance = Appearance83;

Sphere Sphere86 = createNode("Sphere");
Sphere86.radius = 0.2;
Shape82.geometry = Sphere86;

Transform81.child = new undefined();

Transform81.child[0] = Shape82;

children[38] = Transform81;

TimeSensor TimeSensor87 = createNode("TimeSensor");
TimeSensor87.DEF = "C_3";
TimeSensor87.cycleInterval = 6;
TimeSensor87.loop = True;
children[39] = TimeSensor87;

PositionInterpolator PositionInterpolator88 = createNode("PositionInterpolator");
PositionInterpolator88.DEF = "PI_3";
PositionInterpolator88.key = new MFFloat(new float[0,0.5,1]);
PositionInterpolator88.keyValue = new MFVec3f(new float[-10.518,0.2,-7.283,-10.518,0.6,-7.283,-10.518,0.2,-7.283]);
children[40] = PositionInterpolator88;

ScalarInterpolator ScalarInterpolator89 = createNode("ScalarInterpolator");
ScalarInterpolator89.DEF = "SI_3";
ScalarInterpolator89.key = new MFFloat(new float[0,0.5,1]);
ScalarInterpolator89.keyValue = new MFFloat(new float[100,700,100]);
children[41] = ScalarInterpolator89;

ROUTE ROUTE90 = createNode("ROUTE");
ROUTE90.fromNode = "C_3";
ROUTE90.fromField = "fraction_changed";
ROUTE90.toNode = "PI_3";
ROUTE90.toField = "set_fraction";
children[42] = ROUTE90;

ROUTE ROUTE91 = createNode("ROUTE");
ROUTE91.fromNode = "PI_3";
ROUTE91.fromField = "value_changed";
ROUTE91.toNode = "T_3";
ROUTE91.toField = "set_translation";
children[43] = ROUTE91;

ROUTE ROUTE92 = createNode("ROUTE");
ROUTE92.fromNode = "C_3";
ROUTE92.fromField = "fraction_changed";
ROUTE92.toNode = "SI_3";
ROUTE92.toField = "set_fraction";
children[44] = ROUTE92;

ROUTE ROUTE93 = createNode("ROUTE");
ROUTE93.fromNode = "SI_3";
ROUTE93.fromField = "value_changed";
ROUTE93.toNode = "IRI_3";
ROUTE93.toField = "set_iridescenceThicknessMaximum";
children[45] = ROUTE93;

}
