#include "C:/x3d-code/www.web3d.org/x3d/languages/c/Concretes.h"
void main(int argc, char ** argv) {
Browser browser = X3D.getBrowser();
X3D X3D0;
X3D0.profile = "CADInterchange";
X3D0.version = "4.0";
head head1 = createNode("head");
component component2 = createNode("component");
component2.name = "CADGeometry";
component2.level = 2;
head1.component = new MFNode();

head1.component[0] = component2;

component component3 = createNode("component");
component3.name = "EnvironmentalEffects";
component3.level = 1;
head1.component[1] = component3;

meta meta4 = createNode("meta");
meta4.name = "title";
meta4.content = "CADPartChildNoTransformation.x3d";
head1.meta[2] = meta4;

meta meta5 = createNode("meta");
meta5.name = "description";
meta5.content = "Developer scene to explore Mantis Issue 528, providing a baseline example with no transformation of CADPart children.";
head1.meta[3] = meta5;

meta meta6 = createNode("meta");
meta6.name = "creator";
meta6.content = "Vince Marchetti, Don Brutzman, Hyokwang Lee, Dick Puk";
head1.meta[4] = meta6;

meta meta7 = createNode("meta");
meta7.name = "translator";
meta7.content = "Vince Marchetti bushing generation using python scripts";
head1.meta[5] = meta7;

meta meta8 = createNode("meta");
meta8.name = "reference";
meta8.content = "https://www.web3d.org/member-only/mantis/view.php?id=528";
head1.meta[6] = meta8;

meta meta9 = createNode("meta");
meta9.name = "warning";
meta9.content = "This scene is intended for specification development only.";
head1.meta[7] = meta9;

meta meta10 = createNode("meta");
meta10.name = "created";
meta10.content = "29 June 2012";
head1.meta[8] = meta10;

meta meta11 = createNode("meta");
meta11.name = "modified";
meta11.content = "20 October 2019";
head1.meta[9] = meta11;

meta meta12 = createNode("meta");
meta12.name = "identifier";
meta12.content = "https://www.web3d.org/x3d/content/examples/Basic/CAD/CADPartChildNoTransformation.x3d";
head1.meta[10] = meta12;

meta meta13 = createNode("meta");
meta13.name = "generator";
meta13.content = "X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit";
head1.meta[11] = meta13;

meta meta14 = createNode("meta");
meta14.name = "license";
meta14.content = "../license.html";
head1.meta[12] = meta14;

head = head1;

WorldInfo WorldInfo16 = createNode("WorldInfo");
WorldInfo16.title = "CADPartChildNoTransformation.x3d";
children = new MFNode();

children[0] = WorldInfo16;

Background Background17 = createNode("Background");
Background17.skyColor = new MFColor(new float[0.9607843,1,0.9607843]);
children[1] = Background17;

Viewpoint Viewpoint18 = createNode("Viewpoint");
Viewpoint18.description = "Hello CAD bushing";
Viewpoint18.orientation = new SFRotation(new float[1,0,0,-0.321751]);
Viewpoint18.position = new SFVec3f(new float[0,5,15]);
children[2] = Viewpoint18;

CADAssembly CADAssembly19 = createNode("CADAssembly");
CADAssembly19.name = "DesignPatternAssembly";
CADPart CADPart20 = createNode("CADPart");
CADPart20.name = "CADPartExample";
//the rotation and translation attributes serve to position the bushing within the assembly
CADFace CADFace21 = createNode("CADFace");
CADFace21.name = "outerSurface";
Shape Shape22 = createNode("Shape");
//note solid='true' and so one-sided external rendering only
Cylinder Cylinder23 = createNode("Cylinder");
Cylinder23.bottom = False;
Cylinder23.height = 3;
Cylinder23.radius = 2;
Cylinder23.top = False;
Shape22.geometry = Cylinder23;

Appearance Appearance24 = createNode("Appearance");
Appearance24.DEF = "AppearanceGrey";
Material Material25 = createNode("Material");
Appearance24.material = Material25;

Shape22.appearance = Appearance24;

CADFace21.shape = Shape22;

CADPart20.children = new MFNode();

CADPart20.children[0] = CADFace21;

CADFace CADFace26 = createNode("CADFace");
CADFace26.name = "innerSurface";
Shape Shape27 = createNode("Shape");
//note solid='false' and so two-sided internal + external rendering
Cylinder Cylinder28 = createNode("Cylinder");
Cylinder28.bottom = False;
Cylinder28.height = 3;
Cylinder28.solid = False;
Cylinder28.top = False;
Shape27.geometry = Cylinder28;

Appearance Appearance29 = createNode("Appearance");
Appearance29.USE = "AppearanceGrey";
Shape27.appearance = Appearance29;

CADFace26.shape = Shape27;

CADPart20.children[1] = CADFace26;

CADFace CADFace30 = createNode("CADFace");
CADFace30.name = "topCap";
Shape Shape31 = createNode("Shape");
IndexedTriangleSet IndexedTriangleSet32 = createNode("IndexedTriangleSet");
IndexedTriangleSet32.index = new MFInt32(new int[0,1,2,2,1,3,2,3,4,4,3,5,4,5,6,6,5,7,6,7,8,8,7,9,8,9,10,10,9,11,10,11,12,12,11,13,12,13,14,14,13,15,14,15,16,16,15,17,16,17,18,18,17,19,18,19,20,20,19,21,20,21,22,22,21,23,22,23,24,24,23,25,24,25,26,26,25,27,26,27,28,28,27,29,28,29,30,30,29,31,30,31,32,32,31,33,32,33,34,34,33,35,34,35,36,36,35,37,36,37,38,38,37,39,38,39,40,40,39,41,40,41,42,42,41,43,42,43,44,44,43,45,44,45,46,46,45,47,46,47,48,48,47,49,48,49,50,50,49,51,50,51,52,52,51,53,52,53,54,54,53,55,54,55,56,56,55,57,56,57,58,58,57,59,58,59,60,60,59,61,60,61,62,62,61,63,62,63,64,64,63,65]);
Coordinate Coordinate33 = createNode("Coordinate");
Coordinate33.point = new MFVec3f(new float[2,1.5,0,1,1.5,0,1.9616,1.5,0.3902,0.9808,1.5,0.1951,1.8478,1.5,0.7654,0.9239,1.5,0.3827,1.6629,1.5,1.1111,0.8315,1.5,0.5556,1.4142,1.5,1.4142,0.7071,1.5,0.7071,1.1111,1.5,1.6629,0.5556,1.5,0.8315,0.7654,1.5,1.8478,0.3827,1.5,0.9239,0.3902,1.5,1.9616,0.1951,1.5,0.9808,0,1.5,2,0,1.5,1,-0.3902,1.5,1.9616,-0.1951,1.5,0.9808,-0.7654,1.5,1.8478,-0.3827,1.5,0.9239,-1.1111,1.5,1.6629,-0.5556,1.5,0.8315,-1.4142,1.5,1.4142,-0.7071,1.5,0.7071,-1.6629,1.5,1.1111,-0.8315,1.5,0.5556,-1.8478,1.5,0.7654,-0.9239,1.5,0.3827,-1.9616,1.5,0.3902,-0.9808,1.5,0.1951,-2,1.5,0,-1,1.5,0,-1.9616,1.5,-0.3902,-0.9808,1.5,-0.1951,-1.8478,1.5,-0.7654,-0.9239,1.5,-0.3827,-1.6629,1.5,-1.1111,-0.8315,1.5,-0.5556,-1.4142,1.5,-1.4142,-0.7071,1.5,-0.7071,-1.1111,1.5,-1.6629,-0.5556,1.5,-0.8315,-0.7654,1.5,-1.8478,-0.3827,1.5,-0.9239,-0.3902,1.5,-1.9616,-0.1951,1.5,-0.9808,0,1.5,-2,0,1.5,-1,0.3902,1.5,-1.9616,0.1951,1.5,-0.9808,0.7654,1.5,-1.8478,0.3827,1.5,-0.9239,1.1111,1.5,-1.6629,0.5556,1.5,-0.8315,1.4142,1.5,-1.4142,0.7071,1.5,-0.7071,1.6629,1.5,-1.1111,0.8315,1.5,-0.5556,1.8478,1.5,-0.7654,0.9239,1.5,-0.3827,1.9616,1.5,-0.3902,0.9808,1.5,-0.1951,2,1.5,0,1,1.5,0]);
IndexedTriangleSet32.coord = Coordinate33;

Shape31.geometry = IndexedTriangleSet32;

Appearance Appearance34 = createNode("Appearance");
Appearance34.USE = "AppearanceGrey";
Shape31.appearance = Appearance34;

CADFace30.shape = Shape31;

CADPart20.children[2] = CADFace30;

CADFace CADFace35 = createNode("CADFace");
CADFace35.name = "bottomCap";
Shape Shape36 = createNode("Shape");
IndexedTriangleSet IndexedTriangleSet37 = createNode("IndexedTriangleSet");
IndexedTriangleSet37.index = new MFInt32(new int[0,1,2,2,1,3,2,3,4,4,3,5,4,5,6,6,5,7,6,7,8,8,7,9,8,9,10,10,9,11,10,11,12,12,11,13,12,13,14,14,13,15,14,15,16,16,15,17,16,17,18,18,17,19,18,19,20,20,19,21,20,21,22,22,21,23,22,23,24,24,23,25,24,25,26,26,25,27,26,27,28,28,27,29,28,29,30,30,29,31,30,31,32,32,31,33,32,33,34,34,33,35,34,35,36,36,35,37,36,37,38,38,37,39,38,39,40,40,39,41,40,41,42,42,41,43,42,43,44,44,43,45,44,45,46,46,45,47,46,47,48,48,47,49,48,49,50,50,49,51,50,51,52,52,51,53,52,53,54,54,53,55,54,55,56,56,55,57,56,57,58,58,57,59,58,59,60,60,59,61,60,61,62,62,61,63,62,63,64,64,63,65]);
Coordinate Coordinate38 = createNode("Coordinate");
Coordinate38.point = new MFVec3f(new float[2,-1.5,0,1,-1.5,0,1.9616,-1.5,-0.3902,0.9808,-1.5,-0.1951,1.8478,-1.5,-0.7654,0.9239,-1.5,-0.3827,1.6629,-1.5,-1.1111,0.8315,-1.5,-0.5556,1.4142,-1.5,-1.4142,0.7071,-1.5,-0.7071,1.1111,-1.5,-1.6629,0.5556,-1.5,-0.8315,0.7654,-1.5,-1.8478,0.3827,-1.5,-0.9239,0.3902,-1.5,-1.9616,0.1951,-1.5,-0.9808,0,-1.5,-2,0,-1.5,-1,-0.3902,-1.5,-1.9616,-0.1951,-1.5,-0.9808,-0.7654,-1.5,-1.8478,-0.3827,-1.5,-0.9239,-1.1111,-1.5,-1.6629,-0.5556,-1.5,-0.8315,-1.4142,-1.5,-1.4142,-0.7071,-1.5,-0.7071,-1.6629,-1.5,-1.1111,-0.8315,-1.5,-0.5556,-1.8478,-1.5,-0.7654,-0.9239,-1.5,-0.3827,-1.9616,-1.5,-0.3902,-0.9808,-1.5,-0.1951,-2,-1.5,0,-1,-1.5,0,-1.9616,-1.5,0.3902,-0.9808,-1.5,0.1951,-1.8478,-1.5,0.7654,-0.9239,-1.5,0.3827,-1.6629,-1.5,1.1111,-0.8315,-1.5,0.5556,-1.4142,-1.5,1.4142,-0.7071,-1.5,0.7071,-1.1111,-1.5,1.6629,-0.5556,-1.5,0.8315,-0.7654,-1.5,1.8478,-0.3827,-1.5,0.9239,-0.3902,-1.5,1.9616,-0.1951,-1.5,0.9808,0,-1.5,2,0,-1.5,1,0.3902,-1.5,1.9616,0.1951,-1.5,0.9808,0.7654,-1.5,1.8478,0.3827,-1.5,0.9239,1.1111,-1.5,1.6629,0.5556,-1.5,0.8315,1.4142,-1.5,1.4142,0.7071,-1.5,0.7071,1.6629,-1.5,1.1111,0.8315,-1.5,0.5556,1.8478,-1.5,0.7654,0.9239,-1.5,0.3827,1.9616,-1.5,0.3902,0.9808,-1.5,0.1951,2,-1.5,0,1,-1.5,0]);
IndexedTriangleSet37.coord = Coordinate38;

Shape36.geometry = IndexedTriangleSet37;

Appearance Appearance39 = createNode("Appearance");
Appearance39.USE = "AppearanceGrey";
Shape36.appearance = Appearance39;

CADFace35.shape = Shape36;

CADPart20.children[3] = CADFace35;

CADAssembly19.children = new MFNode();

CADAssembly19.children[0] = CADPart20;

children[3] = CADAssembly19;

}
