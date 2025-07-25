#include "C:/x3d-code/www.web3d.org/x3d/languages/c/Concretes.h"
void main(int argc, char ** argv) {
Browser browser = X3D.getBrowser();
X3D X3D0;
X3D0.profile = "Interchange";
X3D0.version = "4.0";
head head1 = createNode("head");
meta meta2 = createNode("meta");
meta2.name = "title";
meta2.content = "ScubaTank.x3d";
head1.meta = new MFNode();

head1.meta[0] = meta2;

meta meta3 = createNode("meta");
meta3.name = "description";
meta3.content = "Scuba gear used by Nancy Diving example.";
head1.meta[1] = meta3;

meta meta4 = createNode("meta");
meta4.name = "creator";
meta4.content = "Etsuko Lippi";
head1.meta[2] = meta4;

meta meta5 = createNode("meta");
meta5.name = "created";
meta5.content = "24 January 2001";
head1.meta[3] = meta5;

meta meta6 = createNode("meta");
meta6.name = "modified";
meta6.content = "23 May 2020";
head1.meta[4] = meta6;

meta meta7 = createNode("meta");
meta7.name = "identifier";
meta7.content = "https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Legacy/ScubaTank.x3d";
head1.meta[5] = meta7;

meta meta8 = createNode("meta");
meta8.name = "generator";
meta8.content = "X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit";
head1.meta[6] = meta8;

meta meta9 = createNode("meta");
meta9.name = "license";
meta9.content = "../license.html";
head1.meta[7] = meta9;

head = head1;

WorldInfo WorldInfo11 = createNode("WorldInfo");
WorldInfo11.title = "ScubaTank.x3d";
children = new MFNode();

children[0] = WorldInfo11;

Transform Transform12 = createNode("Transform");
Transform12.DEF = "ScubaTank";
Transform Transform13 = createNode("Transform");
Shape Shape14 = createNode("Shape");
Appearance Appearance15 = createNode("Appearance");
Material Material16 = createNode("Material");
Material16.DEF = "tank";
Material16.ambientIntensity = 0.3;
Material16.diffuseColor = new SFColor(new float[0.3,0.3,0.5]);
Material16.shininess = 0.1;
Material16.specularColor = new SFColor(new float[0.7,0.7,0.8]);
Appearance15.material = Material16;

Shape14.appearance = Appearance15;

Cylinder Cylinder17 = createNode("Cylinder");
Cylinder17.height = 0.7;
Cylinder17.radius = 0.1;
Shape14.geometry = Cylinder17;

Transform13.child = new undefined();

Transform13.child[0] = Shape14;

Transform12.children = new MFNode();

Transform12.children[0] = Transform13;

Transform Transform18 = createNode("Transform");
Transform18.translation = new SFVec3f(new float[0,0.35,0]);
Shape Shape19 = createNode("Shape");
Appearance Appearance20 = createNode("Appearance");
Material Material21 = createNode("Material");
Material21.USE = "tank";
Appearance20.material = Material21;

Shape19.appearance = Appearance20;

Sphere Sphere22 = createNode("Sphere");
Sphere22.radius = 0.098;
Shape19.geometry = Sphere22;

Transform18.child = new undefined();

Transform18.child[0] = Shape19;

Transform12.children[1] = Transform18;

Transform Transform23 = createNode("Transform");
Transform23.translation = new SFVec3f(new float[0,-0.35,0]);
Shape Shape24 = createNode("Shape");
Shape24.DEF = "tankBottom";
Appearance Appearance25 = createNode("Appearance");
Material Material26 = createNode("Material");
Material26.DEF = "black";
Material26.ambientIntensity = 0.3;
Material26.diffuseColor = new SFColor(new float[0,0,0]);
Appearance25.material = Material26;

Shape24.appearance = Appearance25;

Cylinder Cylinder27 = createNode("Cylinder");
Cylinder27.height = 0.06;
Cylinder27.radius = 0.115;
Shape24.geometry = Cylinder27;

Transform23.child = new undefined();

Transform23.child[0] = Shape24;

Transform12.children[2] = Transform23;

Group Group28 = createNode("Group");
Group28.DEF = "tankNozzle";
Transform Transform29 = createNode("Transform");
Transform Transform30 = createNode("Transform");
Transform30.translation = new SFVec3f(new float[0,0.45,0]);
Shape Shape31 = createNode("Shape");
Shape31.DEF = "pressure";
Appearance Appearance32 = createNode("Appearance");
Material Material33 = createNode("Material");
Material33.DEF = "pressureColor";
Material33.ambientIntensity = 0.4;
Material33.diffuseColor = new SFColor(new float[0.91,0.91,0.91]);
Material33.shininess = 0.16;
Material33.specularColor = new SFColor(new float[0.91,0.9,0.91]);
Appearance32.material = Material33;

Shape31.appearance = Appearance32;

Cylinder Cylinder34 = createNode("Cylinder");
Cylinder34.height = 0.1;
Cylinder34.radius = 0.015;
Shape31.geometry = Cylinder34;

Transform30.child = new undefined();

Transform30.child[0] = Shape31;

Transform29.children = new MFNode();

Transform29.children[0] = Transform30;

Transform Transform35 = createNode("Transform");
Transform35.translation = new SFVec3f(new float[0,0.5,0]);
Shape Shape36 = createNode("Shape");
Shape36.DEF = "pressureTop";
Appearance Appearance37 = createNode("Appearance");
Material Material38 = createNode("Material");
Material38.USE = "black";
Appearance37.material = Material38;

Shape36.appearance = Appearance37;

Cylinder Cylinder39 = createNode("Cylinder");
Cylinder39.height = 0.02;
Cylinder39.radius = 0.025;
Shape36.geometry = Cylinder39;

Transform35.child = new undefined();

Transform35.child[0] = Shape36;

Transform29.children[1] = Transform35;

Transform Transform40 = createNode("Transform");
Transform40.rotation = new SFRotation(new float[0,0,1,1.57]);
Transform40.translation = new SFVec3f(new float[-0.028,0.462,0]);
Transform Transform41 = createNode("Transform");
Shape Shape42 = createNode("Shape");
Shape42.DEF = "connectorToRegulator";
Appearance Appearance43 = createNode("Appearance");
Material Material44 = createNode("Material");
Material44.USE = "pressureColor";
Appearance43.material = Material44;

Shape42.appearance = Appearance43;

Cylinder Cylinder45 = createNode("Cylinder");
Cylinder45.height = 0.03;
Cylinder45.radius = 0.01;
Shape42.geometry = Cylinder45;

Transform41.child = new undefined();

Transform41.child[0] = Shape42;

Transform40.children = new MFNode();

Transform40.children[0] = Transform41;

Transform Transform46 = createNode("Transform");
Transform46.translation = new SFVec3f(new float[0,0.02,0]);
Shape Shape47 = createNode("Shape");
Shape47.DEF = "connectorToRegulatorTop";
Appearance Appearance48 = createNode("Appearance");
Material Material49 = createNode("Material");
Material49.USE = "black";
Appearance48.material = Material49;

Shape47.appearance = Appearance48;

Cylinder Cylinder50 = createNode("Cylinder");
Cylinder50.height = 0.02;
Cylinder50.radius = 0.02;
Shape47.geometry = Cylinder50;

Transform46.child = new undefined();

Transform46.child[0] = Shape47;

Transform40.children[1] = Transform46;

Transform29.children[2] = Transform40;

Group28.children = new MFNode();

Group28.children[0] = Transform29;

Transform12.children[3] = Group28;

Transform Transform51 = createNode("Transform");
Transform51.translation = new SFVec3f(new float[0,0.2,0]);
Shape Shape52 = createNode("Shape");
Shape52.DEF = "tankHoldBelt";
Appearance Appearance53 = createNode("Appearance");
Material Material54 = createNode("Material");
Material54.USE = "black";
Appearance53.material = Material54;

Shape52.appearance = Appearance53;

Cylinder Cylinder55 = createNode("Cylinder");
Cylinder55.height = 0.1;
Cylinder55.radius = 0.115;
Shape52.geometry = Cylinder55;

Transform51.child = new undefined();

Transform51.child[0] = Shape52;

Transform12.children[4] = Transform51;

children[1] = Transform12;

Background Background56 = createNode("Background");
Background56.skyColor = new MFColor(new float[0.6,0.6,0.6]);
children[2] = Background56;

}
