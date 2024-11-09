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
meta3.content = "Thu, 23 Apr 2015 06:06:57 GMT";
head1.meta[1] = meta3;

meta meta4 = createNode("meta");
meta4.name = "creator";
meta4.content = "Holger Seelig";
head1.meta[2] = meta4;

meta meta5 = createNode("meta");
meta5.name = "generator";
meta5.content = "Titania V0.7.8, http://titania.create3000.de";
head1.meta[3] = meta5;

meta meta6 = createNode("meta");
meta6.name = "modified";
meta6.content = "Thu, 23 Apr 2015 06:06:57 GMT";
head1.meta[4] = meta6;

head = head1;

WorldInfo WorldInfo8 = createNode("WorldInfo");
WorldInfo8.info = new MFString(new java.lang.String[", ","Created in TitaniaPackaged by CosmoPackage"]);
children = new MFNode();

children[0] = WorldInfo8;

Shape Shape9 = createNode("Shape");
Appearance Appearance10 = createNode("Appearance");
Material Material11 = createNode("Material");
Material11.ambientIntensity = 0;
Material11.diffuseColor = new SFColor(new float[0,0.381692,0.638298]);
Material11.specularColor = new SFColor(new float[0.00833528,0.335313,0.574468]);
Material11.emissiveColor = new SFColor(new float[0.00138921,0.0558855,0.0957447]);
Material11.shininess = 0.0425532;
Appearance10.material = Material11;

Shape9.appearance = Appearance10;

IndexedFaceSet IndexedFaceSet12 = createNode("IndexedFaceSet");
IndexedFaceSet12.solid = False;
IndexedFaceSet12.coordIndex = new MFInt32(new int[0,19,34,35,-1,34,18,3,35,-1,19,11,36,34,-1,36,10,18,34,-1,11,21,37,36,-1,37,20,10,36,-1,21,7,38,37,-1,38,6,20,37,-1,7,23,39,38,-1,39,22,6,38,-1,23,13,40,39,-1,40,12,22,39,-1,13,25,41,40,-1,41,24,12,40,-1,25,5,42,41,-1,42,4,24,41,-1,5,27,43,42,-1,43,26,4,42,-1,27,15,44,43,-1,44,14,26,43,-1,15,29,45,44,-1,45,28,14,44,-1,29,9,46,45,-1,46,8,28,45,-1,9,31,47,46,-1,47,30,8,46,-1,31,17,48,47,-1,48,16,30,47,-1,17,33,49,48,-1,49,32,16,48,-1,33,1,50,49,-1,50,2,32,49,-1]);
Coordinate Coordinate13 = createNode("Coordinate");
Coordinate13.point = new MFVec3f(new float[-2.2186,-0.466457,0,2.2186,-0.0429742,0,2.2186,0.5,0,-2.2186,0.5,0,0,0.5,0,0,0.0199192,0,-1.1093,0.5,0,-1.1093,-0.122639,0,1.1093,0.5,0,1.1093,0.0366907,0,-1.66395,0.5,0,-1.66395,-0.252619,0,-0.55465,0.5,0,-0.55465,-0.0303957,0,0.55465,0.5,0,0.55465,0.0408836,0,1.66395,0.5,0,1.66395,0.0115333,0,-1.94128,0.5,0,-1.94128,-0.351057,0,-1.38663,0.5,0,-1.38663,-0.18134,0,-0.831975,0.5,0,-0.831975,-0.0723245,0,-0.277325,0.5,0,-0.277325,-0.00104529,0,0.277325,0.5,0,0.277325,0.0283051,0,0.831975,0.5,0,0.831975,0.0408835,0,1.38663,0.5,0,1.38663,0.0283047,0,1.94128,0.5,0,1.94128,-0.00523812,0,-1.94128,0.0744713,0,-2.2186,0.0167715,0,-1.66395,0.123691,0,-1.38663,0.15933,0,-1.1093,0.18868,0,-0.831975,0.213838,0,-0.55465,0.234802,0,-0.277325,0.249477,0,0,0.25996,0,0.277325,0.264153,0,0.55465,0.270442,0,0.831975,0.270442,0,1.1093,0.268345,0,1.38663,0.264152,0,1.66395,0.255767,0,1.94128,0.247381,0,2.2186,0.228513,0]);
IndexedFaceSet12.coord = Coordinate13;

Shape9.geometry = IndexedFaceSet12;

children[1] = Shape9;

Transform Transform14 = createNode("Transform");
Transform Transform15 = createNode("Transform");
Group Group16 = createNode("Group");
Group Group17 = createNode("Group");
Group17.DEF = "light";
TimeSensor TimeSensor18 = createNode("TimeSensor");
TimeSensor18.DEF = "Time_1";
TimeSensor18.cycleInterval = 50;
TimeSensor18.loop = True;
TimeSensor18.startTime = 974704573.545383;
TimeSensor18.stopTime = 1;
Group17.children = new MFNode();

Group17.children[0] = TimeSensor18;

Group16.children = new MFNode();

Group16.children[0] = Group17;

PositionInterpolator PositionInterpolator19 = createNode("PositionInterpolator");
PositionInterpolator19.DEF = "Light1LocationInterp_1";
PositionInterpolator19.key = new MFFloat(new float[0,0.02,0.04,0.06,0.08,0.1,0.12,0.14,0.16,0.18,0.2,0.22,0.24,0.26,0.28,0.3,0.32,0.34,0.36,0.38,0.4,0.42,0.44,0.46,0.48,0.5,0.52,0.54,0.56,0.58,0.6,0.62,0.64,0.66,0.68,0.7,0.72,0.74,0.76,0.78,0.8,0.82,0.84,0.86,0.88,0.9,0.92,0.94,0.96,0.98,1]);
PositionInterpolator19.keyValue = new MFVec3f(new float[-2.18119,0.746135,2.07582,-2.00021,0.745245,2.07031,-1.80697,0.744294,2.06442,-1.60312,0.743291,2.05821,-1.39036,0.742244,2.05172,-1.17034,0.741162,2.04502,-0.944747,0.740052,2.03815,-0.715249,0.738923,2.03115,-0.483521,0.737782,2.02409,-0.251235,0.73664,2.01701,-0.0200639,0.735502,2.00997,0.208318,0.734379,2.00301,0.432239,0.733277,1.99619,0.650025,0.732205,1.98955,0.860003,0.731172,1.98316,1.0605,0.730186,1.97705,1.24984,0.729254,1.97128,1.42636,0.728386,1.9659,1.58837,0.727589,1.96096,1.73421,0.726871,1.95652,1.86221,0.726241,1.95262,1.97068,0.725708,1.94931,2.05796,0.725278,1.94665,2.12238,0.724961,1.94469,2.16226,0.724765,1.94348,2.17592,0.724698,1.94306,2.16226,0.724765,1.94348,2.12238,0.724961,1.94469,2.05796,0.725278,1.94665,1.97068,0.725708,1.94931,1.86221,0.726241,1.95262,1.73421,0.726871,1.95652,1.58837,0.727589,1.96096,1.42636,0.728386,1.9659,1.24984,0.729254,1.97128,1.0605,0.730186,1.97705,0.860005,0.731172,1.98316,0.650028,0.732205,1.98955,0.432242,0.733277,1.99619,0.208322,0.734379,2.00301,-0.0200602,0.735502,2.00997,-0.251231,0.73664,2.01701,-0.483517,0.737782,2.02409,-0.715245,0.738923,2.03115,-0.944743,0.740052,2.03815,-1.17034,0.741162,2.04502,-1.39035,0.742244,2.05172,-1.60312,0.743291,2.05821,-1.80696,0.744294,2.06442,-2.00021,0.745245,2.07031,-2.18119,0.746135,2.07582]);
Group16.children[1] = PositionInterpolator19;

Transform15.children = new MFNode();

Transform15.children[0] = Group16;

SpotLight SpotLight20 = createNode("SpotLight");
SpotLight20.DEF = "Light1_1";
SpotLight20.location = new SFVec3f(new float[-2.18119,0.746135,2.07582]);
SpotLight20.direction = new SFVec3f(new float[-0.0304552,-0.314654,-0.948708]);
SpotLight20.beamWidth = 0.500735;
Transform15.children[1] = SpotLight20;

Transform14.children = new MFNode();

Transform14.children[0] = Transform15;

Transform Transform21 = createNode("Transform");
Transform21.DEF = "vs";
VisibilitySensor VisibilitySensor22 = createNode("VisibilitySensor");
VisibilitySensor22.DEF = "_1";
VisibilitySensor22.size = new SFVec3f(new float[5,1,0.1]);
Transform21.children = new MFNode();

Transform21.children[0] = VisibilitySensor22;

Transform14.children[1] = Transform21;

children[2] = Transform14;

ROUTE ROUTE23 = createNode("ROUTE");
ROUTE23.fromNode = "_1";
ROUTE23.fromField = "isActive";
ROUTE23.toNode = "Time_1";
ROUTE23.toField = "set_enabled";
children[3] = ROUTE23;

ROUTE ROUTE24 = createNode("ROUTE");
ROUTE24.fromNode = "_1";
ROUTE24.fromField = "enterTime";
ROUTE24.toNode = "Time_1";
ROUTE24.toField = "set_startTime";
children[4] = ROUTE24;

ROUTE ROUTE25 = createNode("ROUTE");
ROUTE25.fromNode = "Time_1";
ROUTE25.fromField = "fraction_changed";
ROUTE25.toNode = "Light1LocationInterp_1";
ROUTE25.toField = "set_fraction";
children[5] = ROUTE25;

ROUTE ROUTE26 = createNode("ROUTE");
ROUTE26.fromNode = "_1";
ROUTE26.fromField = "isActive";
ROUTE26.toNode = "Light1_1";
ROUTE26.toField = "set_on";
children[6] = ROUTE26;

ROUTE ROUTE27 = createNode("ROUTE");
ROUTE27.fromNode = "Light1LocationInterp_1";
ROUTE27.fromField = "value_changed";
ROUTE27.toNode = "Light1_1";
ROUTE27.toField = "set_location";
children[7] = ROUTE27;

}
