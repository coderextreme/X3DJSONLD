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
meta3.content = "Thu, 05 Nov 2015 03:28:56 GMT";
head1.meta[1] = meta3;

meta meta4 = createNode("meta");
meta4.name = "creator";
meta4.content = "Holger Seelig";
head1.meta[2] = meta4;

meta meta5 = createNode("meta");
meta5.name = "generator";
meta5.content = "Titania V1.2.0, http://titania.create3000.de";
head1.meta[3] = meta5;

meta meta6 = createNode("meta");
meta6.name = "modified";
meta6.content = "Thu, 05 Nov 2015 03:28:56 GMT";
head1.meta[4] = meta6;

head = head1;

Group Group8 = createNode("Group");
WorldInfo WorldInfo9 = createNode("WorldInfo");
WorldInfo9.info = new MFString(new java.lang.String[", ","Created in Titania, ","Packaged by CosmoPackagePackaged by CosmoPackage"]);
Group8.children = new MFNode();

Group8.children[0] = WorldInfo9;

Transform Transform10 = createNode("Transform");
Transform10.DEF = "level2";
Transform Transform11 = createNode("Transform");
Transform11.DEF = "VisibilitySensor";
VisibilitySensor VisibilitySensor12 = createNode("VisibilitySensor");
VisibilitySensor12.DEF = "_1";
VisibilitySensor12.size = new SFVec3f(new float[0.7,0.7,0.7]);
Transform11.children = new MFNode();

Transform11.children[0] = VisibilitySensor12;

Transform10.children = new MFNode();

Transform10.children[0] = Transform11;

Transform Transform13 = createNode("Transform");
Transform13.DEF = "Bonus";
Group Group14 = createNode("Group");
Group14.DEF = "rotate";
Group Group15 = createNode("Group");
Group15.DEF = "Bonus_1";
TimeSensor TimeSensor16 = createNode("TimeSensor");
TimeSensor16.DEF = "Time";
TimeSensor16.cycleInterval = 10;
TimeSensor16.loop = True;
TimeSensor16.startTime = 952980296.19053;
TimeSensor16.stopTime = 952972802.072958;
Group15.children = new MFNode();

Group15.children[0] = TimeSensor16;

Group14.children = new MFNode();

Group14.children[0] = Group15;

OrientationInterpolator OrientationInterpolator17 = createNode("OrientationInterpolator");
OrientationInterpolator17.DEF = "BonusRotationInterp";
OrientationInterpolator17.key = new MFFloat(new float[0,0.25,0.5,0.75,1]);
OrientationInterpolator17.keyValue = new MFRotation(new float[0,0,1,0,0,-1,0,1.57079,0,1,0,3.14159,0,1,0,1.5708,0,0,1,0]);
Group14.children[1] = OrientationInterpolator17;

Transform13.children = new MFNode();

Transform13.children[0] = Group14;

Transform Transform18 = createNode("Transform");
Transform18.DEF = "sanduhr";
Transform Transform19 = createNode("Transform");
Transform19.rotation = new SFRotation(new float[0,0,1,0.287199]);
Shape Shape20 = createNode("Shape");
IndexedFaceSet IndexedFaceSet21 = createNode("IndexedFaceSet");
IndexedFaceSet21.colorIndex = new MFInt32(new int[0,2,2,0,-1,0,2,2,0,-1,4,4,4,4,-1,0,2,2,0,-1,1,1,1,1,-1,0,2,2,0,-1,2,2,2,2,-1,2,0,0,2,-1,1,1,1,1,-1,2,0,0,2,-1,3,3,3,3,-1,2,0,0,2,-1]);
IndexedFaceSet21.coordIndex = new MFInt32(new int[0,1,2,3,-1,3,2,4,5,-1,6,0,3,5,-1,5,4,7,6,-1,1,7,4,2,-1,6,7,1,0,-1,8,9,10,11,-1,11,10,12,13,-1,14,8,11,13,-1,13,12,15,14,-1,9,15,12,10,-1,14,15,9,8,-1]);
Color Color22 = createNode("Color");
Color22.color = new MFColor(new float[0.0481283,0,0.00527964,0.566845,0.0076234,0,0.240642,0,0,0.0481283,0.029009,0.0252846,0.0213904,0,0.00234651]);
IndexedFaceSet21.color = Color22;

Coordinate Coordinate23 = createNode("Coordinate");
Coordinate23.point = new MFVec3f(new float[0.15312,0.36392,0.15283,0.15312,0.320038,0.152865,0.15312,0.319794,-0.153375,0.15312,0.363676,-0.15341,-0.15312,0.319794,-0.153375,-0.15312,0.363676,-0.15341,-0.15312,0.36392,0.15283,-0.15312,0.320038,0.152865,0.15312,-0.332721,0.153385,0.15312,-0.376602,0.15342,0.15312,-0.376846,-0.15282,0.15312,-0.332964,-0.152855,-0.15312,-0.376846,-0.15282,-0.15312,-0.332964,-0.152855,-0.15312,-0.332721,0.153385,-0.15312,-0.376602,0.15342]);
IndexedFaceSet21.coord = Coordinate23;

Shape20.geometry = IndexedFaceSet21;

Transform19.child = new undefined();

Transform19.child[0] = Shape20;

Transform18.children = new MFNode();

Transform18.children[0] = Transform19;

Transform Transform24 = createNode("Transform");
Transform24.DEF = "obj";
Transform24.rotation = new SFRotation(new float[0,0,1,0.287199]);
Shape Shape25 = createNode("Shape");
IndexedFaceSet IndexedFaceSet26 = createNode("IndexedFaceSet");
IndexedFaceSet26.colorIndex = new MFInt32(new int[2,1,3,-1,0,1,1,-1,2,1,0,-1,0,1,1,-1,2,1,3,-1,0,1,1,-1,2,1,0,-1,0,1,1,-1,2,1,3,-1,0,1,1,-1,2,1,0,-1,0,1,1,-1,1,1,1,-1,1,1,1,-1,1,1,1,-1,1,1,1,-1,1,1,1,-1,1,1,1,-1,1,1,1,-1,1,1,1,-1,1,1,1,-1,1,1,1,-1,1,1,1,-1,1,1,1,-1,1,0,1,-1,1,2,3,-1,1,0,1,-1,1,2,0,-1,1,0,1,-1,1,2,3,-1,1,0,1,-1,1,2,0,-1,1,0,1,-1,1,2,3,-1,1,0,1,-1,1,2,0,-1]);
IndexedFaceSet26.coordIndex = new MFInt32(new int[0,1,2,-1,2,1,3,-1,2,3,4,-1,4,3,5,-1,4,5,6,-1,6,5,7,-1,6,7,8,-1,8,7,9,-1,8,9,10,-1,10,9,11,-1,10,11,12,-1,12,11,13,-1,14,15,16,-1,16,15,17,-1,16,17,18,-1,18,17,19,-1,18,19,20,-1,20,19,21,-1,20,21,22,-1,22,21,23,-1,22,23,24,-1,24,23,25,-1,24,25,26,-1,26,25,27,-1,28,29,30,-1,30,29,31,-1,30,31,32,-1,32,31,33,-1,32,33,34,-1,34,33,35,-1,34,35,36,-1,36,35,37,-1,36,37,38,-1,38,37,39,-1,38,39,40,-1,40,39,41,-1]);
Color Color27 = createNode("Color");
Color27.color = new MFColor(new float[1,0,0.043376,1,0.442751,0,0.540107,0.0467591,0,0.791444,0.292867,0.280675]);
IndexedFaceSet26.color = Color27;

Coordinate Coordinate28 = createNode("Coordinate");
Coordinate28.point = new MFVec3f(new float[0.151133,-0.342532,-4.8137e-12,0.0123568,-0.0179521,-7.19952e-13,0.0755665,-0.342532,0.130885,0.0061784,-0.0179521,0.0107013,-0.0755665,-0.342532,0.130885,-0.0061784,-0.0179521,0.0107013,-0.151133,-0.342532,-5.19143e-12,-0.0123568,-0.0179521,-1.09976e-12,-0.0755665,-0.342532,-0.130885,-0.0061784,-0.0179521,-0.0107013,0.0755665,-0.342532,-0.130885,0.0061784,-0.0179521,-0.0107013,0.151133,-0.342532,-4.8137e-12,0.0123568,-0.0179521,-7.19952e-13,0.0123568,-0.0179521,-7.19952e-13,0.0133073,0.0236975,4.6467e-12,0.0061784,-0.0179521,0.0107013,0.00665363,0.0236975,0.0115244,-0.0061784,-0.0179521,0.0107013,-0.00665363,0.0236975,0.0115244,-0.0123568,-0.0179521,-1.09976e-12,-0.0133073,0.0236975,3.53806e-12,-0.0061784,-0.0179521,-0.0107013,-0.00665363,0.0236975,-0.0115244,0.0061784,-0.0179521,-0.0107013,0.00665363,0.0236975,-0.0115244,0.0123568,-0.0179521,-7.19952e-13,0.0133073,0.0236975,4.6467e-12,0.0133073,0.0236975,4.6467e-12,0.152083,0.342533,-4.90405e-12,0.00665363,0.0236975,0.0115244,0.0760416,0.342533,0.131708,-0.00665363,0.0236975,0.0115244,-0.0760416,0.342533,0.131708,-0.0133073,0.0236975,3.53806e-12,-0.152083,0.342533,-5.10109e-12,-0.00665363,0.0236975,-0.0115244,-0.0760416,0.342533,-0.131708,0.00665363,0.0236975,-0.0115244,0.0760416,0.342533,-0.131708,0.0133073,0.0236975,4.6467e-12,0.152083,0.342533,-4.90405e-12]);
IndexedFaceSet26.coord = Coordinate28;

Shape25.geometry = IndexedFaceSet26;

Transform24.child = new undefined();

Transform24.child[0] = Shape25;

Transform18.children[1] = Transform24;

Transform Transform29 = createNode("Transform");
Transform29.rotation = new SFRotation(new float[0,0,1,0.287199]);
Shape Shape30 = createNode("Shape");
Appearance Appearance31 = createNode("Appearance");
Shape30.appearance = Appearance31;

IndexedFaceSet IndexedFaceSet32 = createNode("IndexedFaceSet");
IndexedFaceSet32.solid = False;
IndexedFaceSet32.colorIndex = new MFInt32(new int[0,1,1,0,-1,1,1,0,0,-1,0,0,1,1,-1,0,1,1,0,-1,0,0,1,1,-1,0,1,1,0,-1,1,1,0,0,-1,0,1,1,0,-1]);
IndexedFaceSet32.coordIndex = new MFInt32(new int[0,1,2,3,-1,4,5,0,3,-1,9,8,7,6,-1,9,11,10,8,-1,15,14,13,12,-1,15,17,16,14,-1,18,19,20,21,-1,20,22,23,21,-1]);
Color Color33 = createNode("Color");
Color33.color = new MFColor(new float[0.919786,0.349022,0.089409,0.28877,0.0554722,0.0688231]);
IndexedFaceSet32.color = Color33;

Coordinate Coordinate34 = createNode("Coordinate");
Coordinate34.point = new MFVec3f(new float[-0.115194,-0.00911173,0.149401,-0.115194,0.322477,0.149137,-0.143802,0.322454,0.120527,-0.143802,-0.0091345,0.120791,-0.143802,-0.340723,0.121055,-0.115194,-0.3407,0.149665,0.148124,-0.340725,0.118842,0.119514,-0.340702,0.147451,0.119514,-0.00911331,0.147187,0.148124,-0.00913608,0.118578,0.119514,0.322475,0.146923,0.148124,0.322453,0.118313,0.117301,-0.340934,-0.14447,0.14591,-0.340912,-0.11586,0.14591,-0.00932315,-0.116124,0.117301,-0.00934592,-0.144734,0.14591,0.322265,-0.116389,0.117301,0.322243,-0.144998,-0.117407,-0.340933,-0.142257,-0.146016,-0.34091,-0.113647,-0.146016,-0.0093213,-0.113911,-0.117407,-0.00934407,-0.142521,-0.146016,0.322267,-0.114175,-0.117407,0.322245,-0.142785]);
IndexedFaceSet32.coord = Coordinate34;

Shape30.geometry = IndexedFaceSet32;

Transform29.child = new undefined();

Transform29.child[0] = Shape30;

Transform18.children[2] = Transform29;

Transform13.children[1] = Transform18;

Transform10.children[1] = Transform13;

Transform Transform35 = createNode("Transform");
Transform35.DEF = "Glow2";
Transform Transform36 = createNode("Transform");
Transform36.DEF = "Glow";
Billboard Billboard37 = createNode("Billboard");
Billboard37.axisOfRotation = new SFVec3f(new float[0,0,0]);
Transform Transform38 = createNode("Transform");
Transform38.DEF = "glow";
Shape Shape39 = createNode("Shape");
Appearance Appearance40 = createNode("Appearance");
ImageTexture ImageTexture41 = createNode("ImageTexture");
ImageTexture41.url = new MFString(new java.lang.String["bt-glow.png"]);
Appearance40.texture = ImageTexture41;

Shape39.appearance = Appearance40;

IndexedFaceSet IndexedFaceSet42 = createNode("IndexedFaceSet");
IndexedFaceSet42.colorIndex = new MFInt32(new int[1,1,1,-1,1,1,1,-1]);
IndexedFaceSet42.coordIndex = new MFInt32(new int[1,2,0,-1,2,3,0,-1]);
Color Color43 = createNode("Color");
Color43.color = new MFColor(new float[0.8,0.198115,0,1,0.0603581,0]);
IndexedFaceSet42.color = Color43;

TextureCoordinate TextureCoordinate44 = createNode("TextureCoordinate");
TextureCoordinate44.point = new MFVec2f(new float[0,0,1,0,1,1,0,1,1,0.5,0,0.5,0.5,1,0.5,0]);
IndexedFaceSet42.texCoord = TextureCoordinate44;

Coordinate Coordinate45 = createNode("Coordinate");
Coordinate45.point = new MFVec3f(new float[-0.5,-0.502186,0,0.5,-0.502186,0,0.5,0.497814,0,-0.5,0.497814,0]);
IndexedFaceSet42.coord = Coordinate45;

Shape39.geometry = IndexedFaceSet42;

Transform38.child = new undefined();

Transform38.child[0] = Shape39;

Billboard37.children = new MFNode();

Billboard37.children[0] = Transform38;

Transform36.children = new MFNode();

Transform36.children[0] = Billboard37;

Transform35.children = new MFNode();

Transform35.children[0] = Transform36;

Transform10.children[2] = Transform35;

Group8.children[1] = Transform10;

children = new MFNode();

children[0] = Group8;

ROUTE ROUTE46 = createNode("ROUTE");
ROUTE46.fromNode = "_1";
ROUTE46.fromField = "isActive";
ROUTE46.toNode = "Time";
ROUTE46.toField = "set_enabled";
children[1] = ROUTE46;

ROUTE ROUTE47 = createNode("ROUTE");
ROUTE47.fromNode = "_1";
ROUTE47.fromField = "enterTime";
ROUTE47.toNode = "Time";
ROUTE47.toField = "set_startTime";
children[2] = ROUTE47;

ROUTE ROUTE48 = createNode("ROUTE");
ROUTE48.fromNode = "_1";
ROUTE48.fromField = "exitTime";
ROUTE48.toNode = "Time";
ROUTE48.toField = "set_stopTime";
children[3] = ROUTE48;

ROUTE ROUTE49 = createNode("ROUTE");
ROUTE49.fromNode = "Time";
ROUTE49.fromField = "fraction_changed";
ROUTE49.toNode = "BonusRotationInterp";
ROUTE49.toField = "set_fraction";
children[4] = ROUTE49;

ROUTE ROUTE50 = createNode("ROUTE");
ROUTE50.fromNode = "BonusRotationInterp";
ROUTE50.fromField = "value_changed";
ROUTE50.toNode = "Bonus";
ROUTE50.toField = "set_rotation";
children[5] = ROUTE50;

}
