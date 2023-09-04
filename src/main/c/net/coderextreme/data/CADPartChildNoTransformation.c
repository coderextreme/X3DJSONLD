#include "C:/x3d-code/www.web3d.org/x3d/languages/c/Concretes.h"
void main(int argc, char ** argv) {
Browser browser = X3D.getBrowser();
X3D X3D0;
X3D0.profile = "CADInterchange";
X3D0.version = "4.0";
head head1 = createNode("head");
meta meta2 = createNode("meta");
meta2.name = "title";
meta2.content = "CADPartChildNoTransformation.x3d";
head1.meta = new MFNode();

head1.meta[0] = meta2;

meta meta3 = createNode("meta");
meta3.name = "description";
meta3.content = "Developer scene to explore Mantis Issue 528, providing a baseline example with no transformation of CADPart children.";
head1.meta[1] = meta3;

meta meta4 = createNode("meta");
meta4.name = "creator";
meta4.content = "Vince Marchetti, Don Brutzman, Hyokwang Lee, Dick Puk";
head1.meta[2] = meta4;

meta meta5 = createNode("meta");
meta5.name = "translator";
meta5.content = "Vince Marchetti bushing generation using python scripts";
head1.meta[3] = meta5;

meta meta6 = createNode("meta");
meta6.name = "reference";
meta6.content = "https://www.web3d.org/member-only/mantis/view.php?id=528";
head1.meta[4] = meta6;

meta meta7 = createNode("meta");
meta7.name = "warning";
meta7.content = "This scene is intended for specification development only.";
head1.meta[5] = meta7;

meta meta8 = createNode("meta");
meta8.name = "created";
meta8.content = "29 June 2012";
head1.meta[6] = meta8;

meta meta9 = createNode("meta");
meta9.name = "modified";
meta9.content = "20 October 2019";
head1.meta[7] = meta9;

meta meta10 = createNode("meta");
meta10.name = "identifier";
meta10.content = "https://www.web3d.org/x3d/content/examples/Basic/CAD/CADPartChildNoTransformation.x3d";
head1.meta[8] = meta10;

meta meta11 = createNode("meta");
meta11.name = "generator";
meta11.content = "X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit";
head1.meta[9] = meta11;

component component12 = createNode("component");
component12.name = "CADGeometry";
component12.level = 2;
head1.component[10] = component12;

component component13 = createNode("component");
component13.name = "EnvironmentalEffects";
component13.level = 1;
head1.component[11] = component13;

head = head1;

WorldInfo WorldInfo15 = createNode("WorldInfo");
WorldInfo15.title = "CADPartChildNoTransformation.x3d";
children = new MFNode();

children[0] = WorldInfo15;

Background Background16 = createNode("Background");
Background16.skyColor = new MFColor(new float[0.9607843,1,0.9607843]);
children[1] = Background16;

Viewpoint Viewpoint17 = createNode("Viewpoint");
Viewpoint17.description = "Hello CAD bushing";
Viewpoint17.position = new SFVec3f(new float[0,5,15]);
Viewpoint17.orientation = new SFRotation(new float[1,0,0,-0.321751]);
children[2] = Viewpoint17;

CADAssembly CADAssembly18 = createNode("CADAssembly");
CADAssembly18.name = "DesignPatternAssembly";
CADPart CADPart19 = createNode("CADPart");
CADPart19.name = "CADPartExample";
CADFace CADFace20 = createNode("CADFace");
CADFace20.name = "outerSurface";
Shape Shape21 = createNode("Shape");
Appearance Appearance22 = createNode("Appearance");
Appearance22.DEF = "AppearanceGrey";
Material Material23 = createNode("Material");
Appearance22.material = Material23;

Shape21.appearance = Appearance22;

Cylinder Cylinder24 = createNode("Cylinder");
Cylinder24.top = False;
Cylinder24.bottom = False;
Cylinder24.height = 3;
Cylinder24.radius = 2;
Shape21.geometry = Cylinder24;

CADFace20.shape = Shape21;

CADPart19.children = new MFNode();

CADPart19.children[0] = CADFace20;

CADFace CADFace25 = createNode("CADFace");
CADFace25.name = "innerSurface";
Shape Shape26 = createNode("Shape");
Appearance Appearance27 = createNode("Appearance");
Appearance27.USE = "AppearanceGrey";
Shape26.appearance = Appearance27;

Cylinder Cylinder28 = createNode("Cylinder");
Cylinder28.top = False;
Cylinder28.bottom = False;
Cylinder28.height = 3;
Cylinder28.solid = False;
Shape26.geometry = Cylinder28;

CADFace25.shape = Shape26;

CADPart19.children[1] = CADFace25;

CADFace CADFace29 = createNode("CADFace");
CADFace29.name = "topCap";
Shape Shape30 = createNode("Shape");
Appearance Appearance31 = createNode("Appearance");
Appearance31.USE = "AppearanceGrey";
Shape30.appearance = Appearance31;

IndexedTriangleSet IndexedTriangleSet32 = createNode("IndexedTriangleSet");
IndexedTriangleSet32.index = new MFInt32(new int[0,1,2,2,1,3,2,3,4,4,3,5,4,5,6,6,5,7,6,7,8,8,7,9,8,9,10,10,9,11,10,11,12,12,11,13,12,13,14,14,13,15,14,15,16,16,15,17,16,17,18,18,17,19,18,19,20,20,19,21,20,21,22,22,21,23,22,23,24,24,23,25,24,25,26,26,25,27,26,27,28,28,27,29,28,29,30,30,29,31,30,31,32,32,31,33,32,33,34,34,33,35,34,35,36,36,35,37,36,37,38,38,37,39,38,39,40,40,39,41,40,41,42,42,41,43,42,43,44,44,43,45,44,45,46,46,45,47,46,47,48,48,47,49,48,49,50,50,49,51,50,51,52,52,51,53,52,53,54,54,53,55,54,55,56,56,55,57,56,57,58,58,57,59,58,59,60,60,59,61,60,61,62,62,61,63,62,63,64,64,63,65]);
Coordinate Coordinate33 = createNode("Coordinate");
Coordinate33.point = new MFVec3f(new float[2,1.5,0,1,1.5,0,1.9616,1.5,0.3902,0.9808,1.5,0.1951,1.8478,1.5,0.7654,0.9239,1.5,0.3827,1.6629,1.5,1.1111,0.8315,1.5,0.5556,1.4142,1.5,1.4142,0.7071,1.5,0.7071,1.1111,1.5,1.6629,0.5556,1.5,0.8315,0.7654,1.5,1.8478,0.3827,1.5,0.9239,0.3902,1.5,1.9616,0.1951,1.5,0.9808,0,1.5,2,0,1.5,1,-0.3902,1.5,1.9616,-0.1951,1.5,0.9808,-0.7654,1.5,1.8478,-0.3827,1.5,0.9239,-1.1111,1.5,1.6629,-0.5556,1.5,0.8315,-1.4142,1.5,1.4142,-0.7071,1.5,0.7071,-1.6629,1.5,1.1111,-0.8315,1.5,0.5556,-1.8478,1.5,0.7654,-0.9239,1.5,0.3827,-1.9616,1.5,0.3902,-0.9808,1.5,0.1951,-2,1.5,0,-1,1.5,0,-1.9616,1.5,-0.3902,-0.9808,1.5,-0.1951,-1.8478,1.5,-0.7654,-0.9239,1.5,-0.3827,-1.6629,1.5,-1.1111,-0.8315,1.5,-0.5556,-1.4142,1.5,-1.4142,-0.7071,1.5,-0.7071,-1.1111,1.5,-1.6629,-0.5556,1.5,-0.8315,-0.7654,1.5,-1.8478,-0.3827,1.5,-0.9239,-0.3902,1.5,-1.9616,-0.1951,1.5,-0.9808,0,1.5,-2,0,1.5,-1,0.3902,1.5,-1.9616,0.1951,1.5,-0.9808,0.7654,1.5,-1.8478,0.3827,1.5,-0.9239,1.1111,1.5,-1.6629,0.5556,1.5,-0.8315,1.4142,1.5,-1.4142,0.7071,1.5,-0.7071,1.6629,1.5,-1.1111,0.8315,1.5,-0.5556,1.8478,1.5,-0.7654,0.9239,1.5,-0.3827,1.9616,1.5,-0.3902,0.9808,1.5,-0.1951,2,1.5,0,1,1.5,0]);
IndexedTriangleSet32.coord = Coordinate33;

Shape30.geometry = IndexedTriangleSet32;

CADFace29.shape = Shape30;

CADPart19.children[2] = CADFace29;

CADFace CADFace34 = createNode("CADFace");
CADFace34.name = "bottomCap";
Shape Shape35 = createNode("Shape");
Appearance Appearance36 = createNode("Appearance");
Appearance36.USE = "AppearanceGrey";
Shape35.appearance = Appearance36;

IndexedTriangleSet IndexedTriangleSet37 = createNode("IndexedTriangleSet");
IndexedTriangleSet37.index = new MFInt32(new int[0,1,2,2,1,3,2,3,4,4,3,5,4,5,6,6,5,7,6,7,8,8,7,9,8,9,10,10,9,11,10,11,12,12,11,13,12,13,14,14,13,15,14,15,16,16,15,17,16,17,18,18,17,19,18,19,20,20,19,21,20,21,22,22,21,23,22,23,24,24,23,25,24,25,26,26,25,27,26,27,28,28,27,29,28,29,30,30,29,31,30,31,32,32,31,33,32,33,34,34,33,35,34,35,36,36,35,37,36,37,38,38,37,39,38,39,40,40,39,41,40,41,42,42,41,43,42,43,44,44,43,45,44,45,46,46,45,47,46,47,48,48,47,49,48,49,50,50,49,51,50,51,52,52,51,53,52,53,54,54,53,55,54,55,56,56,55,57,56,57,58,58,57,59,58,59,60,60,59,61,60,61,62,62,61,63,62,63,64,64,63,65]);
Coordinate Coordinate38 = createNode("Coordinate");
Coordinate38.point = new MFVec3f(new float[2,-1.5,0,1,-1.5,0,1.9616,-1.5,-0.3902,0.9808,-1.5,-0.1951,1.8478,-1.5,-0.7654,0.9239,-1.5,-0.3827,1.6629,-1.5,-1.1111,0.8315,-1.5,-0.5556,1.4142,-1.5,-1.4142,0.7071,-1.5,-0.7071,1.1111,-1.5,-1.6629,0.5556,-1.5,-0.8315,0.7654,-1.5,-1.8478,0.3827,-1.5,-0.9239,0.3902,-1.5,-1.9616,0.1951,-1.5,-0.9808,0,-1.5,-2,0,-1.5,-1,-0.3902,-1.5,-1.9616,-0.1951,-1.5,-0.9808,-0.7654,-1.5,-1.8478,-0.3827,-1.5,-0.9239,-1.1111,-1.5,-1.6629,-0.5556,-1.5,-0.8315,-1.4142,-1.5,-1.4142,-0.7071,-1.5,-0.7071,-1.6629,-1.5,-1.1111,-0.8315,-1.5,-0.5556,-1.8478,-1.5,-0.7654,-0.9239,-1.5,-0.3827,-1.9616,-1.5,-0.3902,-0.9808,-1.5,-0.1951,-2,-1.5,0,-1,-1.5,0,-1.9616,-1.5,0.3902,-0.9808,-1.5,0.1951,-1.8478,-1.5,0.7654,-0.9239,-1.5,0.3827,-1.6629,-1.5,1.1111,-0.8315,-1.5,0.5556,-1.4142,-1.5,1.4142,-0.7071,-1.5,0.7071,-1.1111,-1.5,1.6629,-0.5556,-1.5,0.8315,-0.7654,-1.5,1.8478,-0.3827,-1.5,0.9239,-0.3902,-1.5,1.9616,-0.1951,-1.5,0.9808,0,-1.5,2,0,-1.5,1,0.3902,-1.5,1.9616,0.1951,-1.5,0.9808,0.7654,-1.5,1.8478,0.3827,-1.5,0.9239,1.1111,-1.5,1.6629,0.5556,-1.5,0.8315,1.4142,-1.5,1.4142,0.7071,-1.5,0.7071,1.6629,-1.5,1.1111,0.8315,-1.5,0.5556,1.8478,-1.5,0.7654,0.9239,-1.5,0.3827,1.9616,-1.5,0.3902,0.9808,-1.5,0.1951,2,-1.5,0,1,-1.5,0]);
IndexedTriangleSet37.coord = Coordinate38;

Shape35.geometry = IndexedTriangleSet37;

CADFace34.shape = Shape35;

CADPart19.children[3] = CADFace34;

CADAssembly18.children = new MFNode();

CADAssembly18.children[0] = CADPart19;

children[3] = CADAssembly18;

}
