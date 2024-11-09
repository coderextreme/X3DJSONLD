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
meta3.content = "Wed, 01 Apr 2015 23:39:37 GMT";
head1.meta[1] = meta3;

meta meta4 = createNode("meta");
meta4.name = "creator";
meta4.content = "Holger Seelig";
head1.meta[2] = meta4;

meta meta5 = createNode("meta");
meta5.name = "generator";
meta5.content = "Titania V0.7.7, http://titania.create3000.de";
head1.meta[3] = meta5;

meta meta6 = createNode("meta");
meta6.name = "modified";
meta6.content = "Wed, 01 Apr 2015 23:39:37 GMT";
head1.meta[4] = meta6;

head = head1;

Viewpoint Viewpoint8 = createNode("Viewpoint");
children = new MFNode();

children[0] = Viewpoint8;

Shape Shape9 = createNode("Shape");
Appearance Appearance10 = createNode("Appearance");
Material Material11 = createNode("Material");
Material11.diffuseColor = new SFColor(new float[0,0.5,1]);
Appearance10.material = Material11;

Shape9.appearance = Appearance10;

Extrusion Extrusion12 = createNode("Extrusion");
Extrusion12.creaseAngle = 0.785;
Extrusion12.crossSection = new MFVec2f(new float[-0.5,-0.1,-0.5,0.1,0.5,0.1,0.5,-0.1,-0.5,-0.1]);
Extrusion12.spine = new MFVec3f(new float[0,0,2,0.415823,0.066667,1.9563,0.813473,0.133333,1.82709,1.17557,0.2,1.61803,1.48629,0.266667,1.33826,1.73205,0.333333,1,1.90211,0.4,0.618036,1.98904,0.466667,0.209059,1.98904,0.533333,-0.209054,1.90211,0.6,-0.618031,1.73205,0.666667,-0.999997,1.48629,0.733333,-1.33826,1.17557,0.8,-1.61803,0.813478,0.866667,-1.82709,0.415828,0.933333,-1.95629,0.000005,1,-2,-0.415818,1.06667,-1.9563,-0.813468,1.13333,-1.82709,-1.17557,1.2,-1.61804,-1.48628,1.26667,-1.33827,-1.73205,1.33333,-1.00001,-1.90211,1.4,-0.618041,-1.98904,1.46667,-0.209064,-1.98905,1.53333,0.209049,-1.90212,1.6,0.618026,-1.73205,1.66667,0.999992,-1.4863,1.73333,1.33825,-1.17558,1.8,1.61803,-0.813482,1.86667,1.82709,-0.415833,1.93333,1.95629,-0.00001,2,2,0.415813,2.06667,1.9563,0.813463,2.13333,1.8271,1.17556,2.2,1.61804,1.48628,2.26667,1.33827,1.73205,2.33333,1.00001,1.90211,2.4,0.618046,1.98904,2.46667,0.209069,1.98905,2.53333,-0.209044,1.90212,2.6,-0.61802,1.73206,2.66667,-0.999987,1.4863,2.73333,-1.33825,1.17558,2.8,-1.61803,0.813486,2.86667,-1.82709,0.415838,2.93333,-1.95629,0.000015,3,-2,-0.415808,3.06667,-1.9563,-0.813459,3.13333,-1.8271,-1.17556,3.2,-1.61804,-1.48628,3.26667,-1.33827,-1.73204,3.33333,-1.00002,-1.90211,3.4,-0.618051,-1.98904,3.46667,-0.209075,-1.98905,3.53333,0.209038,-1.90212,3.6,0.618016,-1.73206,3.66667,0.999983,-1.4863,3.73333,1.33825,-1.17559,3.8,1.61802,-0.813491,3.86667,1.82708,-0.415843,3.93333,1.95629]);
Shape9.geometry = Extrusion12;

children[1] = Shape9;

}
